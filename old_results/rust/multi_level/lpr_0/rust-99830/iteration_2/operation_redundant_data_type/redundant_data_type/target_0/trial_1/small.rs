use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    (2..4).for_each(|e| {
        let e = e as u32;
        let mut other = e.pow(2 * (4 / e)) + 1u32;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 1000000000u32,
                inout( "eax") other => _,
                inout( "edx") c
            );
        }
    });
    assert_eq!(c, 650);
}

fn pow(mut base: u32, mut exp: u32) -> u32 {
    base *= base;
    exp >>= 1;
    let mut acc = base;
    exp >>= 1;
    base *= base;
    if exp == 1 {
        acc *= base;
    }
    acc
}

impl Add for u32 {
    type Output = u32;
    fn add(self, other: u32) -> u32 {
        self + other
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, other: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 1000000000u32,
                inout( "eax") other => _,
                inout( "edx") self
            );
        }
    }
}