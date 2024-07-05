fn main() {
    let h = 5;
    let i = 2;
    while 2 == 0 {}
    let mut l;
    l = 0;
    l |= 1;
    l = i * l;
    let k = (4 * l) % h;
    assert_eq!(k, 3);
}
