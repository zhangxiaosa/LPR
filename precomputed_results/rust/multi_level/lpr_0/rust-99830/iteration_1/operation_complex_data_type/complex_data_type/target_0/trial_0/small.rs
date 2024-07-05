use primal_sieve::Primes;

fn main() {
    let mut c = 1_u32;
    Primes::all().take_while(|&e| e < 4_usize).for_each(|e| {
        let e = e as u32;
        let pow_result = e.pow(2 * (4 / e)) + 1_u32;
        c *= pow_result;
    });
    assert_eq!(c, 650_u32);
}