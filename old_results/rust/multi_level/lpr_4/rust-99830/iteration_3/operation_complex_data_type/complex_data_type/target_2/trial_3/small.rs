use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    let target = 650u32;
    
    Primes::all()
        .take_while(|&prime| prime < 4)
        .for_each(|prime| {
            let _e = prime as u32;
            let base = _e.pow(2 * (4 / _e)) + 1;
            c *= base;
        });
    
    assert_eq!(c, target);
}