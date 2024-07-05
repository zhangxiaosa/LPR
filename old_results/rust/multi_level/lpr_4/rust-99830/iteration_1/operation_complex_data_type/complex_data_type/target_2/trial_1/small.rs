use primal_sieve::Primes;

fn main() {
    let mut c_value = 1;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c_value *= _e.pow(2 * (4 / _e)) + 1);
    assert_eq!(c_value, 650);
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

struct d(u32);