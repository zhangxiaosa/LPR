fn main() {
    let i = 2;
    let mut l;
    l = 0;
    l |= 1;
    l = 2 * l;
    let k = 3;
    assert_eq!(k, 3);
}