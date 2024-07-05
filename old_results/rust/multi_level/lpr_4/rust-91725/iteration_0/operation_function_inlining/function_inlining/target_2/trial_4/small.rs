fn g(h: u32, arg: u32) -> u32 {
    let mut k = arg;
    let mut l = 0;
    l |= 1 << 0;
    l = ((2 * l) % h) as u32;
    k = ((k * l) % h) as u32;
    k
}

fn main() {
    assert_eq!(g(5, 4), 3);
}
