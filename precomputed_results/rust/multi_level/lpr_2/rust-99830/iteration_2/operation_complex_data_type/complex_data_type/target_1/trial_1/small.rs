use primal_sieve::Primes;

fn main() {
    let b: u32 = 4;
    let mut c: d = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e: u32 = e as u32;
        let f: u32 = b / e;
        let base: d = d(e).pow(2 * f);
        c *= base + d(1);
    });
    assert_eq!(c.0, 650);
}

struct d {
    value: u32,
}

const G: u32 = 1000000000;

impl d {
    fn new(value: u32) -> d {
        d { value }
    }

    fn pow(&self, exp: u32) -> d {
        let mut base: d = *self;
        base *= base;
        let mut exp = exp >> 1;
        let mut acc: d = base;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}

impl core::ops::Add for d {
    type Output = d;

    fn add(self, other: d) -> d {
        d { value: self.value + other.value }
    }
}

impl core::ops::MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        unsafe {
            let mut result_high: u32 = 0;
            let mut result_low: u32 = 0;

            asm!(
                "mul edx",
                "div {}",
                in(reg) G,
                inout("eax") other.value => _,
                inout("edx") self.value,
                out("edx") result_high,
                out("eax") result_low,
            );

            if result_high != 0 {{
                panic!("Overflow occurred.");
            }}
        }
    }
}
