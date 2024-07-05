use primal_sieve::Primes;

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        let pow_result = pow(d(e as u32), 2 * f);
        let pow_result_plus_one = add(pow_result, d(1));
        c = mul_assign(c, pow_result_plus_one);
    });
    assert_eq!(c, 650);
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut acc = base;
    let mut base_squared = mul_assign(base, base);
    exp >>= 1;

    while exp > 0 {
        if exp & 1 == 1 {
            acc = mul_assign(acc, base_squared);
        }
        base_squared = mul_assign(base_squared, base_squared);
        exp >>= 1;
    }

    acc
}

fn add(a: u32, b: u32) -> u32 {
    a + b
}

fn mul_assign(a: u32, mut b: u32) -> u32 {
    let mut result = 0;

    while b > 0 {
        if b & 1 == 1 {
            result = add(result, a);
        }
        a = add(a, a);
        b >>= 1;
    }

    result
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1000000000;
}

impl d {
    fn pow(self, exp: u32) -> u32 {
        pow(self.0, exp)
    }
}

impl Add for d {
    type Output = d;

    fn add(self, other: d) -> d {
        d(self.0 + other.0)
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        let mut result = 0;
        let mut a = self.0;
        let mut b = other.0;

        while b > 0 {
            if b & 1 == 1 {
                result = add(result, a);
            }
            a = add(a, a);
            b >>= 1;
        }

        self.0 = result;
    }
}