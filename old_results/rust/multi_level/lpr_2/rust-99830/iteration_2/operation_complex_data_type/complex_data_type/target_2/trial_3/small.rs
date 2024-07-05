use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = 1u32;
    let g = 10u32.pow(9);

    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let base = e.pow(2 * f);
        c *= base + 1;
    });

    assert_eq!(c, 650);
}