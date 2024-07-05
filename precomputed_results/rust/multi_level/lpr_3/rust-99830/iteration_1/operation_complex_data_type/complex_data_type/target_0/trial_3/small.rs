use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        let d_e = d(e as u32);
        let c_pow = d_e.pow(2 * f);
        let c_add_1 = c_pow.add(d(1));
        c *= c_add_1;
    });
    assert_eq!(c.0, 650);
}

struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);
}

impl d {
    fn add(self, h: d) -> d {
        let sum = self.0.checked_add(h.0).unwrap();
        d(sum)
    }
}

impl d {
    fn mul_assign(&mut self, h: d) {
        let product = self.0 as u64 * h.0 as u64;
        self.0 = (product % d::G as u64) as u32;
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
