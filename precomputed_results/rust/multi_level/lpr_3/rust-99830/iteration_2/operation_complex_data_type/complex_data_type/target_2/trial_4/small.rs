use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e_u32: u32 = e as u32;
        let f: u32 = 4 / e_u32;
        let two_f: u32 = 2 * f;
        let d_exp: u32 = pow_d(e_u32, two_f);
        let one: u32 = 1;
        let d_sum: u32 = d_exp + one;
        c *= d_sum;
    });
    assert_eq!(c, 650);
}

fn pow_d(base: u32, exp: u32) -> u32 {
    let mut base_u32: u32 = base;
    base_u32 *= base_u32;
    let mut acc_u32: u32 = base_u32;
    let mut exp_shifted: u32 = exp >> 1;
    base_u32 *= base_u32;
    if exp_shifted == 1 {
        acc_u32 *= base_u32;
    }
    acc_u32
}