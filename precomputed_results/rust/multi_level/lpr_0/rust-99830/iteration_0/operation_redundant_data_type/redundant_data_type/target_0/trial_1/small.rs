use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1;
    (2..b).for_each(|e| {
        let f = b / e;
        c *= e.pow(2 * f) + 1;
    });
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
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 1_000_000_000,
                inout("eax") h => _,
                inout("edx") self
            );
        }
    }
}

fn pow(mut base: u32, mut exp: u32) -> u32 {
    let mut acc = base;

    while exp > 1 {
        base *= base;
        exp >>= 1;
        if exp & 1 == 1 {
            acc *= base;
        }
    }

    acc
}
