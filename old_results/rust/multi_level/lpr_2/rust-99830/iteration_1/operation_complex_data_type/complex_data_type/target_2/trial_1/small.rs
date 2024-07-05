use primal_sieve::Primes;

fn main() {
    let b: i32 = 4;
    let mut c: i32 = 1;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e: u32 = e as u32;
        let f: i32 = b / e as i32;
        c *= (e as i32).pow(2 * f as u32) + 1;
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1000000000;

    fn pow(self, mut exp: u32) -> Self {
        let mut base = self;
        base *= base;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}

impl core::ops::Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl core::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {}",
                in(reg) Self::G,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}
