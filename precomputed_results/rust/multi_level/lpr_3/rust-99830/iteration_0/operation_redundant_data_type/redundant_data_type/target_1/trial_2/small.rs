use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1;
    primal_sieve::Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= (e.pow(2 * f) + 1);
    });
    c
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut acc = base;
    let mut base = base;
    base *= base;
    exp >>= 1;
    acc *= base;
    exp >>= 1;
    base *= base;
    if exp == 1 {
        acc *= base;
    }
    acc
}