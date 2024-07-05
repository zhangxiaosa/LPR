fn main() {
    let mut c = 1;
    (1..4).for_each(|e| {
        let e = e as u32;
        c *= e * e + 1;
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    fn pow(self, exp: u32) -> Self {
        d(self.0.pow(exp))
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
        self.0 *= other.0;
    }
}
