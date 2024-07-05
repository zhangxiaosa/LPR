use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= pow(2 * f) + 1;
    });
    c
}

fn pow(mut exp: u32) -> u32 {
    let mut base = 1u32;
    let mut acc = 1u32;

    while exp > 0 {
        if exp & 1 == 1 {
            acc *= base;
        }
        base *= base;
        exp >>= 1;
    }

    acc
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