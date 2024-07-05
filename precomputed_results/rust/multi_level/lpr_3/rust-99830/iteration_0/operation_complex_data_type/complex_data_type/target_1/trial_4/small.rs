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
        c *= d(e).pow(2 * f) + 1;
    });
    c
}

fn d(x: u32) -> u32 {
    const G: u32 = 10u32.pow(9);
    x
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

// Removed assembly code for multiplication, as it's not necessary for primary types

fn pow(x: u32, mut exp: u32) -> u32 {
    let mut base = x;
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