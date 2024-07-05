#![derive(Clone, Copy)]
struct d(u32);

impl d {
    fn pow(self, mut exp: u32) -> u32 {
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

fn main() {
    let mut c = 1u32;
    (0..4).for_each(|_e| c *= _e as u32.pow(2 * (4 / _e as u32)) + 1);
    assert_eq!(c, 650);
}