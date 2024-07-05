fn main() {
    let h = 5;
    let arg = 4;
    let i = 2;
    let j = 0;
    while 2 == 0 {}
    let mut k;
    k = arg;
    let mut l;
    l = 1 << j;
    l = (i * l) % h;
    k = (k as u64 * l as u64) as u32;

    assert_eq!(k, 3);
}