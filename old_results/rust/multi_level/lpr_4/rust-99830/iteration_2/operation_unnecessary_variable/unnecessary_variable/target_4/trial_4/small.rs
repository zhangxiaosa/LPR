use std::ops::{MulAssign};

#[derive(Clone, Copy)]
struct d(u32);

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        let product: u64 = u64::from(self.0) * u64::from(h.0);
        self.0 = (product % 1_000_000_000) as u32;
    }
}

impl d {
    fn pow(mut self, mut exp: u32) -> Self {
        let mut acc = self;
        exp >>= 1;
        while exp > 0 {
            acc *= acc;
            if exp & 1 == 1 {
                acc *= self;
            }
            exp >>= 1;
        }
        acc
    }
}

fn main() {
    let mut c = (1_u32).pow(2 * (4 / 4)) + 1;
    c = c.pow(2 * (4 / 3)) + 1;
    c = c.pow(2 * (4 / 2)) + 1;
    c = c.pow(2 * (4 / 1)) + 1;
    assert_eq!(c, 650);
}