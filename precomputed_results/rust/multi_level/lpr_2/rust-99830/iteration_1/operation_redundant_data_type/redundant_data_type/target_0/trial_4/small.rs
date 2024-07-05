use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}