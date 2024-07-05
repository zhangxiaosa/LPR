use primal_sieve::Primes;

use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c.mul_assign(add(exp_by_two(e as u32, 2 * f), 1));
    });
    assert_eq!(c, 650);
}

fn add(x: u32, y: u32) -> u32 {
    x + y
}

fn exp_by_two(base: u32, exp: u32) -> u32 {
    let mut acc = base;
    let mut remaining_exp = exp;
    while remaining_exp > 1 {
        acc = acc.pow(2);
        remaining_exp >>= 1;
        if remaining_exp == 1 {
            acc *= base;
        }
    }
    acc
}