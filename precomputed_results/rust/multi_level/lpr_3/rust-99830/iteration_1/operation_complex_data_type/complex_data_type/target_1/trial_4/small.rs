use std::ops::MulAssign;

fn main() {
    let mut c = 1;
    let primes = generate_primes();
    primes.take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

fn generate_primes() -> Vec<u32> {
    unimplemented!()
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self *= h;
    }
}

impl u32 {
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