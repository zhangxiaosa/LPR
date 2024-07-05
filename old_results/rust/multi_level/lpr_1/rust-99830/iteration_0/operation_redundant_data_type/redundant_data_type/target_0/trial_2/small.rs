fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: d) -> d {
    let mut c = 1;
    (0..)
        .map(|e| d(e))
        .take_while(|&e| e < b)
        .for_each(|e| {
            let f = b / e;
            c *= (e * e).pow(2 * f) + d(1);
        });
    c
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    fn pow(self, mut exp: u32) -> Self {
        let mut base = self;
        base = base * base;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base = base * base;
        if exp == 1 {
            acc = acc * base;
        }
        acc
    }
}

impl Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 *= h.0;
    }
}