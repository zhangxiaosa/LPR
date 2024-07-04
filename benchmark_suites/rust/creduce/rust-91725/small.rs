fn c(a: u32, b: u32, d: u32) -> u32 {
    (a as u64 * b as u64 % d as u64) as u32
}
fn e(f: u32, arg: u32) -> u32 {
    let mut g = f - 1;
    {
        let mut h = 0;
        h |= 1 << f;
        g = c(g, h, f)
    }
    g
}
fn main() {
    assert_eq!(e(5, 4), 3)
}
