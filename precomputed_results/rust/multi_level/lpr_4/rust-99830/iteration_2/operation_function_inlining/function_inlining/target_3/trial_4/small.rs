fn main() {
    let mut c = d(1);
    (0..4).for_each(|_e| c *= d(_e as u32).pow(2 * (4 / _e as u32)) + d(1));
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 = self.0.wrapping_mul(h.0);
        self.0 = self.0.wrapping_div(1_000_000_000);
    }
}
