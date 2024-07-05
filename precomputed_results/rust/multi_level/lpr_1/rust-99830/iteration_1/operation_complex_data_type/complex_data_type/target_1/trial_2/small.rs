use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| c *= pow_2_times_b_div_e(e as u32, b) + 1);
    c
}

fn pow_2_times_b_div_e(e: u32, b: u32) -> u32 {
    let mut base = e;
    base *= base;
    let mut exp = b / e;
    let mut acc = base;
    base *= base;
    exp >>= 1;

    if exp == 1 {
        acc *= base;
    }

    acc
}

fn mul_assign(h: &mut u32, a: u32, g: u32) {
    unsafe {
        core::arch::asm!
        (
            "mul edx",
            "div {:e}",
            in(reg) g,
            inout("eax") a => _,
            inout("edx") *h
        );
    }
}
