use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
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
        *self *= h;
    }
}

trait Power {
    fn pow(self, exp: u32) -> Self;
}

impl Power for u32 {
    fn pow(mut self, mut exp: u32) -> u32 {
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

impl Power for u32 {
    fn pow(self, exp: u32) -> u32 {
        self.pow(exp)
    }
}

const G: u32 = 1000000000;
