use primal_sieve::Primes;

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f: u32 = 4 / e;
        c *= e.pow(2 * f as u32) + 1;
    });
    assert_eq!(c, 650);
}