use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            c = c.mul_add(1u32, _e as u32);
        });
    assert_eq!(c, 650);
}
