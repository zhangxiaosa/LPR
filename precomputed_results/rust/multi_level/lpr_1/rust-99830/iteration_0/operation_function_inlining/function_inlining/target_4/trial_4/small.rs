use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| {
            let e = e as u32;
            let f = b / e;
            c *= pow(d(e), 2 * f) + 1;
        });
    c
}

fn pow(mut base: u32, mut exp: u32) -> u32 {
    let mut acc = 1u32;
    loop {
        if (exp & 1) == 1 {
            acc *= base;
        }
        exp >>= 1;
        if exp == 0 {
            break;
        }
        base *= base;
    }
    acc
}