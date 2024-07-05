use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= {
            let temp_d = e;
            let temp_pow = {
                let mut base = temp_d;
                base *= base;
                let mut acc = base;
                let mut exp = 2 * f;
                exp >>= 1;
                base *= base;
                if exp == 1 {
                    acc *= base;
                }
                acc
            };
            let temp_one = 1;
            temp_pow + temp_one
        };
    });
    c
}

