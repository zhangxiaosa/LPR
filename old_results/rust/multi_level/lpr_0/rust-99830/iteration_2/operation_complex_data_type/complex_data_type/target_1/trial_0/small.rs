use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    let g = 10u32.pow(9);

    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let mut other = e.pow(2 * (4 / e)) + 1u32;

        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) g,
                inout("eax") other => _,
                inout("edx") c
            );
        }
    });

    assert_eq!(c, 650u32);
}