use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        let mut base = d(e as u32);
        base *= base;
        let mut acc = base;
        let mut exp = 2 * f;
        while exp > 1 {
            base *= base;
            exp >>= 1;
            if exp & 1 != 0 {
                acc *= base;
            }
        }
        c *= acc + d(1);
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

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

impl core::ops::Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl d {
    const G: u32 = 10u32.pow(9);
}
