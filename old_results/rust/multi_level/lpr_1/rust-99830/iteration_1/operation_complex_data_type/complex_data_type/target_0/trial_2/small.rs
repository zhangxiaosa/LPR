fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1u32;
    primal_sieve::Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| c *= pow_2_times_b_over_e(e as u32, b) + 1);
    c
}

fn pow_2_times_b_over_e(e: u32, b: u32) -> u32 {
    let mut base = e;
    let mut exp = b / e;
    let mut acc = base;

    base *= base;
    exp >>= 1;
    base *= base;

    if exp == 1 {
        acc *= base;
    }

    acc
}