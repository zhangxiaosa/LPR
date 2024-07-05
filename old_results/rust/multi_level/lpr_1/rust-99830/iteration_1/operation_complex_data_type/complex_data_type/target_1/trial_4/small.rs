use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| c *= pow(2 * (b / e as u32)) + 1);
    c
}

fn pow(exp: u32) -> u32 {
    let mut base = 1u32;
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

fn add(a: u32, b: u32) -> u32 {
    a + b
}

fn multiply_assign(a: &mut u32, b: u32) {
    *a = ((*a as u64 * b as u64) / 1000000000u64) as u32;
}