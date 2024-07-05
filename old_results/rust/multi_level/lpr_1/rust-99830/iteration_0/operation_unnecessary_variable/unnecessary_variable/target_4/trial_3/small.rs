fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    let b_as_u32 = b as u32;
    let mut e = 2; // The first prime is 2
    loop {
        if e >= b_as_u32 {
            break;
        }
        let f = b_as_u32 / e;
        c *= d(e).pow(2 * f) + d(1);
        e += 1;
    }
    c.0
}

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