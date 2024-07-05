use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1;
    (0..)
        .take_while(|&e| e < b as usize)
        .for_each(|e| c *= e.pow(2 * (b / e as u32)) + 1);
    c
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);

    fn pow(self, mut exp: u32) -> Self {
        self.0 = self.0.pow(exp);
        self
    }
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
