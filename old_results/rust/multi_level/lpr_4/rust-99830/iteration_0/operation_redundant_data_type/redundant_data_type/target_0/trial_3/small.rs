use std::ops::{Add, MulAssign, Div};

fn main() {
    let mut c = 1u32;
    (2..).take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650u32);
}

impl Add for u32 {
    type Output = u32;
    fn add(self, h: u32) -> u32 {
        self + h
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {g}",
                in("eax") self,
                inout("eax") _,
                inout("edx") _
            );
        }
    }
}

trait Pow {
    fn pow(self, exp: u32) -> Self;
}

impl Pow for u32 {
    fn pow(mut self, mut exp: u32) -> u32 {
        let mut base = self;
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
}