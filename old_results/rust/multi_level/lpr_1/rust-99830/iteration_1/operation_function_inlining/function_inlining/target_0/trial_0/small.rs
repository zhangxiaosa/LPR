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
            let mut base = e as u32;
            base *= base;
            let mut acc = base;
            let mut exp = 2 * (b / e as u32);
            while exp > 1 {
                base *= base;
                if exp & 1 == 1 {
                    acc *= base;
                }
                exp >>= 1;
            }
            c *= acc + 1;
        });
    c
}