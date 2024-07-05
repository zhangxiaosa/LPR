use primal_sieve::Primes;

fn main() {
    let mut c = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut acc = base;
    let mut base = base * base;
    exp >>= 1;
    if exp == 1 {
        acc *= base;
    }
    acc
}