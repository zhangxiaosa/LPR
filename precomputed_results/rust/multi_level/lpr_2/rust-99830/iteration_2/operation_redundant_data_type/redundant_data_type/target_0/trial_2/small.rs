fn main() {
    let b = 4;
    let mut c = 1u32;
    Iterator::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let base = e.pow(2 * f);
        c *= base + 1;
    });
    assert_eq!(c, 650);
}

fn pow(base: u32, mut exp: u32) -> u32 {
    let mut acc = base;
    exp >>= 1;
    let mut base = base * base;
    if exp == 1 {
        acc *= base;
    }
    acc
}