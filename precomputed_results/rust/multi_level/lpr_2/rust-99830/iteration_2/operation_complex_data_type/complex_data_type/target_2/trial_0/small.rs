use primal_sieve::Primes;

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut result = base;
    while exp > 1 {
        result *= result;
        exp >>= 1;
    }
    if exp == 1 {
        result *= result;
    }
    result
}

fn main() {
    let b = 4;
    let mut c = 1;
    let mut primes = Primes::all();
    while let Some(e) = primes.next() {
        if e >= b as usize {
            break;
        }
        let e = e as u32;
        let f = b / e;
        let base = pow(e, 2 * f);
        c *= base + 1;
    }
    assert_eq!(c, 650);
}
