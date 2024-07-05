use primal_sieve::Primes;

use std::ops::{Add, MulAssign};

#[derive(Clone, Copy)]
struct d(u32);

impl Add for d {
    type Output = d;
    fn add(mut self, _h: d) -> d {
        self.0 += _h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, _h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 1_000_000_000,
                inout("eax") 1 => _,
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

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|_| c *= d(1).pow(2 * (4 / 1 as u32)) + d(1));
    assert_eq!(c.0, 650);
}