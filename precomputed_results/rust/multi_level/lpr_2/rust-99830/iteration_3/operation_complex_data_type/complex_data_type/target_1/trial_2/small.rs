use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    let primes = Primes::all();
    let filtered_primes = primes.take_while(|&e| e < 4);
    filtered_primes.for_each(|e| {
        let f = 4 / e as u32;
        let pow_result = d(e as u32).pow(2 * f);
        let sum_result = pow_result + d(1);
        c *= sum_result;
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

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

impl core::ops::Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl core::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        let result = self.0 as u64 * h.0 as u64;
        let quotient = result / d::G as u64;
        let remainder = result % d::G as u64;
        self.0 = remainder as u32;
    }
}
