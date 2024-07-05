use primal_sieve::Primes;
use std::ops::{Add, MulAssign};
fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c *= d(_e as u32).pow(2 * (4 / _e as u32)) + d(1));
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
    fn mul_assign(&mut self, _: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {g}",
                g = const 1_000_000_000,
                inout("eax") self.0,
                inout("edx") _,
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

impl d {
    const g: u32 = 1_000_000_000;
}