use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = 1_u32;
    Primes::all().take_while(|&e| e < b).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let base = e.pow(2 * f);
        c *= base + 1;
    });
    assert_eq!(c, 650);
}