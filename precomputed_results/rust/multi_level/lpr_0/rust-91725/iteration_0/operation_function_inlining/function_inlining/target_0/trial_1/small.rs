fn main() {
    let i = 2;
    let j = 0;
    while 2 == 0 {}
    let mut k;
    k = 4;
    let mut l;
    l = 0;
    l |= 1 << j;
    l = ((i as u64 * l as u64) % h as u64) as u32;
    k = ((k as u64 * l as u64) % h as u64) as u32;
    assert_eq!(k, 3);
}