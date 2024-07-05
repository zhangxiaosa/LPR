use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    (0..4).for_each(|e| {
        let f = 4 / e as u32;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

impl Add for u32 {
    type Output = u32;
    fn add(self, h: u32) -> u32 {
        self + h
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self *= h;
    }
}

impl u32 {
    fn pow(self, exp: u32) -> Self {
        let mut base = self;
        base *= base;
        let mut acc = base;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}