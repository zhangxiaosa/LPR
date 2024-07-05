use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    {
        let e = 2;
        let f = 4 / e as u32;
        c *= d(e as u32).pow(2 * f) + d(1);
    }
    {
        let e = 3;
        let f = 4 / e as u32;
        c *= d(e as u32).pow(2 * f) + d(1);
    }
    assert_eq!(c.0, 650);
}