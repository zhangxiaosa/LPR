fn main() {
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        d(e as u32).pow(2 * f) + d(1);
    });
}