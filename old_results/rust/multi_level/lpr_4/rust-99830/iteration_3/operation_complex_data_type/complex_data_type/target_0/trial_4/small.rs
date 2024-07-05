fn power(base: u32, mut exp: u32) -> u64 {
    let mut acc = base as u64;
    let mut c = base as u64;
    c *= c;
    exp >>= 1;
    c *= c;
    exp >>= 1;
    if exp == 1 {
        acc *= c;
    }
    acc
}

fn main() {
    let mut c: u32 = 1;
    let result = Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| c *= power(_e as u32, 2 * (4 / _e as u32)) + 1);
    
    assert_eq!(c, 650);
}
