use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= d::pow_primitive(d(e), 2 * f) + d(1);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl Add for d {
    type Output = d;
    
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl d {
    fn pow_primitive(mut base: d, mut exp: u32) -> d {
        let mut acc = base;
        if exp & 1 != 0 {
            exp -= 1;
        } else {
            base *= base;
            exp >>= 1;
        }
        
        while exp != 0 {
            base *= base;
            exp >>= 1;
            if exp & 1 != 0 {
                acc *= base;
                exp -= 1;
            }
        }
        
        acc
    }
}
