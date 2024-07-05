use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    (2..b).for_each(|e| {
        let f = b / e;
        c *= d(e).powf((2 * f) as f64) + d(1);
    });
    c.0
}

struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);
}

impl Add for d {
    type Output = d;

    fn add(self, other: d) -> d {
        d(self.0 + other.0)
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        unsafe {
            asm!(
                "mul edx",
                "div {}",
                "",
                in("eax") other.0 => _,
                inout("edx") self.0 => _
            );
        }
    }
}

impl d {

    fn powf(self, exp: f64) -> d {
        let mut base = self;
        base *= self;
        let mut acc = base;
        for _ in 0..(exp as u32 - 1) {
            base *= base;
            acc *= base;
        }
        acc
    }
}