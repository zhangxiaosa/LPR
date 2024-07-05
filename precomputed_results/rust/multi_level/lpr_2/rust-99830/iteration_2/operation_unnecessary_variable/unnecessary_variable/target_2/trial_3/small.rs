fn main() {
    let mut c = d(1);
    (0..).map(|e| d(e as u32))
        .take_while(|&e| e < d(4))
        .for_each(|_| {
            let f = 4 / e;
            c *= d(e as u32).pow(2 * f) + d(1);
        });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10_000_000_000;

    fn pow(mut self, mut exp: u32) -> Self {
        let mut base = self;
        base *= base;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}