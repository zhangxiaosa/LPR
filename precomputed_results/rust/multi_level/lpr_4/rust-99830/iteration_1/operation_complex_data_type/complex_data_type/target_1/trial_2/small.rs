use primal_sieve::Primes;

fn main() {
    let mut c = 1;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c *= d(_e as u32).pow(2 * (4 / _e as u32)) + 1);
    assert_eq!(c, 650);
}

struct d(u32);

impl d {
    fn pow(self, mut exp: u32) -> u32 {
        let base = self.0 * self.0;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        let base = base * base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}