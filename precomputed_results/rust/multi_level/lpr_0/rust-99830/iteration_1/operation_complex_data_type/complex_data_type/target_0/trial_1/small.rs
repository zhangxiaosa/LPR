use primal_sieve::Primes;

fn main() {
    let mut c = 1;

    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = e.pow(2 * (4 / e)) + 1;
        c *= pow_result;
    });

    assert_eq!(c, 650);
}
