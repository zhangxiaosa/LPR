use std::ops::Add;

fn main() {
    let mut c = d { 0: 1 };
    {
        let base = d { 0: 4 };
        let mut exp = 2 * (4 / 2);
        let mut acc = base;
        let mut base_sqr = base;
        while exp > 1 {
            base_sqr = base_sqr * base_sqr;
            if exp & 1 == 1 {
                acc.mul_assign(base_sqr);
            }
            exp >>= 1;
        }
        c.mul_assign(acc + d { 0: 1 });
    }
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(mut self, mut exp: u32) -> Self {
        let mut base = self;
        base.mul_assign(base);
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base.mul_assign(base);
        if exp == 1 {
            acc.mul_assign(base);
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

impl d {
    fn mul_assign(&mut self, other: d) {
        self.0 = (self.0 as u64 * other.0 as u64 % Self::G as u64) as u32;
    }
}
