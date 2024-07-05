fn main() {
    let mut c = 1u32;
    primal_sieve::Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = e.pow(2 * (4 / e)) + 1;
        c *= pow_result;
    });
    assert_eq!(c, 650);
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut acc = base;
    let mut base = base;

    base *= base;
    exp >>= 1;
    acc = base;

    exp >>= 1;
    base *= base;
    if exp == 1 {
        acc *= base;
    }

    acc
}

impl Add for u32 {
    type Output = Self;
    fn add(self, other: Self) -> Self {
        self + other
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, other: Self) {
        *self *= other;
        *self /= d::g;
    }
}