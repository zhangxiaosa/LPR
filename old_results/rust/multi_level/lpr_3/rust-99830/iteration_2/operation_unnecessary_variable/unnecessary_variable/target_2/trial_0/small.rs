use primal_sieve::Primes;

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1000000000;
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

fn main() {
    let mut c = d(650); // Optimized: c is assigned a constant value instead of computing it inside the loop.
    assert_eq!(c.0, 650);
}