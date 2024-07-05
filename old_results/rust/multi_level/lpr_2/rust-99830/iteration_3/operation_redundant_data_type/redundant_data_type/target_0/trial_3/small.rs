fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c *= (e as u32).pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}