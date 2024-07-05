fn main() {
    let b = 4;
    let mut c = 1;
    PrimalSieve::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct PrimalSieve;

impl PrimalSieve {
    fn all() -> impl Iterator<Item = usize> {
        // Implementation of generating prime numbers
        // ...
    }
}