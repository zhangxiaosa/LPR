use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1_u32;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c *= (_e as u32).pow(2 * (4 / _e as u32)) + 1);
    assert_eq!(c, 650);
}

impl Add for u32 {
    type Output = u32;
    fn add(self, h: u32) -> u32 {
        self + h
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self *= h % 1_000_000_000;
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