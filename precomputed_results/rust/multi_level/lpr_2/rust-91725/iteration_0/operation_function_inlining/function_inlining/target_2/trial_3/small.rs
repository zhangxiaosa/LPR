fn g(h: u32, arg: u32) -> u32 {
    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1 << 0;
    l = if l == 0 {
        ((2 as u64 * 2 as u64) % h as u64) as u32
    } else {
        2
    };
    k = (k * l) % h;
    k
}

fn main() {
    assert_eq!(g(5, 4), 3);
}