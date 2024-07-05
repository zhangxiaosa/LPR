use primal_sieve::Primes;

fn main() {
    let mut c = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}