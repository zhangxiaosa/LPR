use primal_sieve::Primes;

fn main() {
    let mut c = 1_u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e;
        let tmp1 = e as u32;
        let tmp2 = tmp1.pow(2 * f);
        let tmp3 = 1_u32;
        let tmp4 = tmp2 + tmp3;
        c *= tmp4;
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1000000000;

    fn pow(self, mut exp: u32) -> u32 {
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
        self.0 = (self.0 as u64 * h.0 as u64 % d::G as u64) as u32;
    }
}