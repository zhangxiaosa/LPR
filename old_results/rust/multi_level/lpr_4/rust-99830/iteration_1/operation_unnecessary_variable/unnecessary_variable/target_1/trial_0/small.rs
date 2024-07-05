use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    let acc = d(2);
    assert_eq!(acc.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    fn pow(self, _: u32) -> Self {
        d(2)
    }
}

impl d {
    const g: u32 = 1_000_000_000;
}