use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1;
    (0..b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= e.pow(2 * f) + 1;
    });
    c
}
