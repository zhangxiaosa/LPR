use primal_sieve::Primes;

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    fn new(value: u32) -> Self {
        d(value)
    }

    fn value(&self) -> u32 {
        self.0
    }

    fn add(&self, other: &d) -> d {
        d(self.0 + other.value())
    }

    fn mul_assign(&mut self, other: &d) {
        self.0 *= other.value();
    }

    fn pow(&self, mut exp: u32) -> d {
        let mut base = self.clone();
        base.mul_assign(&base);
        exp >>= 1;
        let mut acc = base.clone();
        exp >>= 1;
        base.mul_assign(&base);
        if exp == 1 {
            acc.mul_assign(&base);
        }
        acc
    }
}

fn main() {
    let mut c = d::new(1);
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c.mul_assign(&d::new(_e as u32).pow(2 * (4 / _e as u32))).add(&d::new(1)));
    assert_eq!(c.value(), 650);
}