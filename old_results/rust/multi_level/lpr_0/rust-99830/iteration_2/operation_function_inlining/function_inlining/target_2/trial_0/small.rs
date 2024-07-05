use primal_sieve::Primes;
use std::ops::Add;

fn main() {
    let mut c = 1;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        // Inlined pow method
        let mut exp = 2 * (4 / e);
        let mut base = d(e);
        let mut acc = base;
        while exp > 1 {
            base *= base;
            exp >>= 1;
            if exp & 1 == 1 {
                acc *= base;
            }
        }
        c *= acc + d(1);
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl Add for d {
    type Output = d;
    fn add(self, other: d) -> d {
        d(self.0 + other.0)
    }
}