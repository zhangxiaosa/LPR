use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4 as usize).for_each(|e| {
        let f = 4 / e as u32;
        c *= d(e as u32).pow(2 * f) + d(1);
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