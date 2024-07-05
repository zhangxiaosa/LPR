use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1_u32;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c *= _e.pow(2 * (4 / _e)));
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl Add for d {
    type Output = d;

    fn add(self, other: d) -> d {
        d(self.0 + other.0)
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        self.0 *= other.0;
    }
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut acc = 1;

    while exp > 0 {
        if exp & 1 == 1 {
            acc *= base;
        }
        exp >>= 1;
        base *= base;
    }

    acc
}
