use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c *= (_e as u32).pow(2 * (4 / _e as u32)) + 1);
    assert_eq!(c, 650);
}
