fn main() {
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        d { 0: e }.pow(2 * (4 / e)) + d { 0: 1 };
    });
}