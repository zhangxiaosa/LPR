fn main() {
    let i = 2;
    let j = 0;
    let mut k = 4;
    let mut l = 0;
    l |= 1 << 0;
    l = ((2 as u64 * l as u64) % 5 as u64) as u32;
    k = ((4 as u64 * l as u64) % 5 as u64) as u32;
    assert_eq!(k, 3);
}