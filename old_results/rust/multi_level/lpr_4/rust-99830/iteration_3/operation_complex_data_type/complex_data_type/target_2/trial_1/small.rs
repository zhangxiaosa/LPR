use primal_sieve::Primes;

fn main() {
    let mut c: u32 = 1;
    Primes::all()
        .take_while(|&prime| prime < 4)
        .for_each(|prime| {
            let _e = prime as u32;
            let power = 2 * (4 / _e);
            let base = _e.pow(power);
            let result = base + 1;
            c *= result;
        });
    assert_eq!(c, 650);
}