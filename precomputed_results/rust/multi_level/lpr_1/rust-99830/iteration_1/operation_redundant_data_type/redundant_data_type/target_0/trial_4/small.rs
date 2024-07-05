use primal_sieve::Primes;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| c *= (e as u32).pow(2 * (b / e as u32)) + 1);
    c
}