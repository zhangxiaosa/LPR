fn main() {
    let mut c = d(1);
    (2..4).for_each(|e| {
        let f = 4 / e;
        c *= d(e).pow(2 * f) + d(1);
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);
impl d {
    const g: u32 = 10u32.pow(9);
}

impl d {
    fn mul_assign(&mut self, h: d) {
        let result = u64::from(self.0) * u64::from(h.0);
        self.0 = (result % Self::g) as u32;
    }
}

impl d {
    fn pow(self, mut exp: u32) -> Self {
        let mut acc = d(1);
        let mut base = self;
        while exp > 0 {
            if exp & 1 == 1 {
                acc *= base;
            }
            exp >>= 1;
            base *= base;
        }
        acc
    }
}
