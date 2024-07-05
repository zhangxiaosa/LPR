fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    (2..=b).for_each(|e| {
        let f = b / e;
        c *= d(e).pow(2 * f) + d(1);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    fn pow(self, mut exp: u32) -> Self {
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

impl d {
    const G: u32 = 1_000_000_000;
}

impl std::ops::Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl std::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 = ((self.0 as u64 * h.0 as u64) % d::G as u64) as u32;
    }
}