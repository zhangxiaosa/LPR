use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    let pow_8 = d(1).pow(8);
    let pow_4 = d(1).pow(4);
    let pow_2 = d(1).pow(2);

    c *= pow_8 + d(1);
    c *= pow_4 + d(1);
    c *= pow_2 + d(1);
    c *= pow_2 + d(1);

    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 1_000_000_000,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

impl d {
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
