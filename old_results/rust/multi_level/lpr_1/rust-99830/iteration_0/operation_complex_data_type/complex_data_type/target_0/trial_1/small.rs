use primal_sieve::Primes;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= pow(d(e), 2 * f) + 1;
    });
    c
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut acc = 1;
    let mut base = base;
    while exp > 0 {
        if exp % 2 == 1 {
            acc *= base;
        }
        base *= base;
        exp /= 2;
    }
    acc
}
