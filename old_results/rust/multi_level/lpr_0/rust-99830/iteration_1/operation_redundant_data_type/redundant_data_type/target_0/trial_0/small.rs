fn main() {
    let mut c = 1u32;
    (0..4).for_each(|e| {
        let e = e as u32;
        let pow_result = e.pow(2 * (4 / e)) + 1;
        c *= pow_result;
    });
    assert_eq!(c, 650);
}

struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);

    fn pow(self, mut exp: u32) -> Self {
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