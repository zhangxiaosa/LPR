use primal_sieve::Primes;

use std::ops::{Add, MulAssign};

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f: u32 = 4 / e as u32;
        c *= (e as u32).pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

impl Add for u32 {
    type Output = u32;

    fn add(mut self, h: u32) -> u32 {
        self += h;
        self
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self = (*self / 1000000000) * h;
    }
}

impl u32 {
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