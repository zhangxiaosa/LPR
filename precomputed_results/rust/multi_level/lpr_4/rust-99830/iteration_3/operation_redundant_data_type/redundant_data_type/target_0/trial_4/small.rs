use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

impl Add for u32 {
    type Output = u32;
    fn add(self, h: u32) -> u32 {
        self + h
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self *= h;
        *self %= 1_000_000_000;
    }
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut result = base;
    while exp > 1 {
        result *= result;
        exp >>= 1;
    }
    if exp == 1 {
        result *= base;
    }
    result
}

fn main() {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| c *= pow(e as u32, 2 * (4 / e as u32)) + 1);
    assert_eq!(c, 650);
}