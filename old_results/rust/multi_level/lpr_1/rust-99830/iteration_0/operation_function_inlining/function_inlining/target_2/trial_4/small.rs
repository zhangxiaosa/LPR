use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1;
    Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| {
            let e = e as u32;
            let f = b / e;
            let mut base = d { 0: e };
            base *= base;
            let mut exp = 2 * f;
            base *= base;
            exp >>= 1;
            let mut acc = base;
            base *= base;
            exp >>= 1;
            if exp == 1 {
                acc *= base;
            }
            c *= acc + d { 0: 1 };
        });
    c
}