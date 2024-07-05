use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= d(e).pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

impl Add<u32> for u32 {
    type Output = u32;
    fn add(self, h: u32) -> u32 {
        self + h
    }
}

impl MulAssign<u32> for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self *= h;
    }
}

trait Pow {
    fn pow(self, exp: u32) -> Self;
}

impl Pow for u32 {
    fn pow(self, mut exp: u32) -> u32 {
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

impl Pow for d {
    fn pow(self, exp: u32) -> Self {
        let d_value = self.0;
        (d_value as u32).pow(exp)
    }
}

const G: u32 = 1_000_000_000;

struct d(u32);

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= d(e).pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

impl Add<u32> for d {
    type Output = d;
    fn add(mut self, h: u32) -> d {
        self.0 += h;
        self
    }
}

impl MulAssign<u32> for d {
    fn mul_assign(&mut self, h: u32) {
        *self = d(self.0 * h);
    }
}