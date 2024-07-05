use primal_sieve::Primes;

const G: u32 = 1_000_000_000;

fn main() {
    let mut c = d_field(1);
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c *= d_field(e as u32).pow(2 * f) + d_field(1);
    });
    assert_eq!(c, 650);
}

fn d_field(value: u32) -> u32 {
    value
}

fn pow(base: u32, exp: u32) -> u32 {
    let mut base_val = base;
    let mut acc = base_val;
    let mut exp_val = exp;
    base_val *= base_val;
    exp_val >>= 1;
    base_val *= base_val;
    if exp_val == 1 {
        acc *= base_val;
    }
    acc
}
