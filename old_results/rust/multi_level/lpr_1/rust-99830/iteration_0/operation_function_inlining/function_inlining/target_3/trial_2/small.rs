use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = { let mut base = 1; base *= base; let mut acc = base; base *= base; acc } + 1;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= { let mut base = e; base *= base; f >>= 1; let mut acc = base; f >>= 1; base *= base; if f == 1 { acc *= base; } acc } + 1;
    });
    c
}