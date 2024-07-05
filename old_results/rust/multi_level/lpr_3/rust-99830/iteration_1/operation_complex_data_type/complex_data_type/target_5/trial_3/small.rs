use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1000000000;
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
        self.0 = (self.0 as u64 * h.0 as u64 % Self::g as u64) as u32;
    }
}

impl d {
    fn pow(self, mut exp: u32) -> d {
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