fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    (2..b).for_each(|e| {
        let f = b / e;
        c *= e.pow((2 * f) as u32) + 1;
    });
    c
}

fn pow(mut base: u32, mut exp: u32) -> u32 {
    let mut acc = 1;
    while exp > 0 {
        if exp % 2 == 1 {
            acc *= base;
        }
        exp >>= 1;
        base *= base;
    }
    acc
}