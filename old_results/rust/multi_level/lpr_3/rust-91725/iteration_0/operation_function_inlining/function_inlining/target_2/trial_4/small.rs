fn c(a: u32, b: u32, d: u32) -> u32 {
    ((a as u64 * b as u64) % d as u64) as u32
}

fn g() -> u32 {
    let i = 2;
    let j = 0;
    while 2 == 0 {}
    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1 << j;
    if l == 0 {
        c(i, i, h)
    } else {
        k = c(k, l, h);
    }
    k
}

fn main() {
    assert_eq!(g(), 3);
}