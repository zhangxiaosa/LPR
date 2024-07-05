fn main() {
    let mut k;
    k = 4;
    let mut l;
    l = 0;
    l |= 1 << 0;
    if l == 0 {
        k = (32) % 5;
    } else {
        k = 2;
    }
    k = 0;
    assert_eq!(k, 3);
}