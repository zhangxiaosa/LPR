use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}