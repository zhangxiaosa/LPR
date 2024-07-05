fn main() {
    let mut c: u32 = 1;
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| c.mul_assign(d.pow(8 / e as u32) + 1));
    assert_eq!(c, 650);
}

struct d(u32);

impl d {
    const g: u32 = 1000000000;
}

impl Add for u32 {
    type Output = u32;

    fn add(mut self, h: u32) -> u32 {
        self += h;
        self
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self = (*self * h) / d::g;
    }
}

impl d {
    fn pow(mut exp: u32) -> u32 {
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