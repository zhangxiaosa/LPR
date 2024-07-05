use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = d(1);
    let primes = Primes::all();

    let prime_0 = primes.nth(0).unwrap() as u32;
    let prime_1 = primes.nth(1).unwrap() as u32;
    let prime_2 = primes.nth(2).unwrap() as u32;
    let prime_3 = primes.nth(3).unwrap() as u32;

    let f_0 = b / prime_0;
    let f_1 = b / prime_1;
    let f_2 = b / prime_2;
    let f_3 = b / prime_3;

    let base_0 = d(prime_0).pow(2 * f_0);
    let base_1 = d(prime_1).pow(2 * f_1);
    let base_2 = d(prime_2).pow(2 * f_2);
    let base_3 = d(prime_3).pow(2 * f_3);

    c *= base_0 + d(1);
    c *= base_1 + d(1);
    c *= base_2 + d(1);
    c *= base_3 + d(1);

    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);
impl d {
    const G: u32 = 10u32.pow(9);
    ...
}