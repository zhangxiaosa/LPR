use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1u32;
    primal_sieve::Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| c *= e.pow(2 * (b / e as u32)) + 1);
    c
}

impl Add for u32 {
    type Output = u32;
    fn add(mut self, h: u32) -> u32 {
        self += h;
        self
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!
            (
                "mul edx",
                "div 1000000000",
                in(reg) 1000000000u32,
                inout("eax") h => _,
                inout("edx") *self
            );
        }
    }
}
}