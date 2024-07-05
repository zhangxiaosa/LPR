fn main() {
    let mut c = 1;
    let primes = [2, 3];
    let result = primes.iter().fold(c, |acc, &e| {
        acc *= d(e as u32).pow(2 * (4 / e as u32)) + d(1);
        acc
    });
    assert_eq!(result.0, 650);
}

struct d(u32);

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
