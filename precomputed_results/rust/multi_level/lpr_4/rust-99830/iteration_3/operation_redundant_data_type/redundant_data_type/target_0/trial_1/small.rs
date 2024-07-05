struct d(u32);
impl std::ops::Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}
impl std::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 = (self.0 * h.0) % 1_000_000_000;
    }
}
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
fn main() {
    let mut c = 1u32;
    (2..4).for_each(|_e| c *= (_e as u32).pow(2 * (4 / _e as u32)) + 1);
    assert_eq!(c, 650);
}