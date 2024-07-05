use std::ops::{Add, MulAssign};
fn main() {
    let mut c = d(1);
    (2..4usize).for_each(|e| {
        let pow_result = d(e as u32).pow(2 * (4 / e)) + d(1);
        c *= pow_result;
    });
}
#[derive(Clone, Copy)]
struct d(u32);
impl d {
    const g: u32 = 10u32.pow(9);
    fn pow(self, mut exp: u32) -> Self {
        exp >>= 1;
        let mut acc = self * self;
        exp >>= 1;
        acc *= acc;
        if exp == 1 {
            acc *= acc;
        }
        acc
    }
}
impl Add for d {
    type Output = d;
    fn add(mut self, other: d) -> d {
        self.0 += other.0;
        self
    }
}
impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        self.0 *= Self::g / other.0;
    }
}
