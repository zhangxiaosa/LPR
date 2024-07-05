use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        let base = d(e).pow(2 * f);
        c *= base + d(1);
    });
    assert_eq!(c.0, 650);
}