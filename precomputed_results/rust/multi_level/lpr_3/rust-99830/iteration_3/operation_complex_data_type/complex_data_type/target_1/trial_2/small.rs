use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| c.mul_assign((e as u32).pow(8 / e as u32) + 1u32));
    assert_eq!(c, 650);
}
