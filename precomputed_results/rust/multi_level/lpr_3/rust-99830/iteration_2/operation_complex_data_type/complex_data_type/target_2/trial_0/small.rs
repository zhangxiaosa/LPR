fn main() {
    let mut c: u32 = 1;
    const g: u32 = 1000000000;

    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c *= (e as u32).pow(2 * f) + 1;
    });

    assert_eq!(c, 650);
}