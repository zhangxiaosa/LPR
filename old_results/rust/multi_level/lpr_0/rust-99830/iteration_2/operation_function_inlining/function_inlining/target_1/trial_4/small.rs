fn main() {
    let mut c = d { 0: 1 };
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let mut exp = 4 / e;
        let mut base = d { 0: e };
        base *= base;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        c *= acc + d { 0: 1 };
    });
    assert_eq!(c.0, 650);
}