fn main() {
    let h = 5;
    let arg = 4;
    let i = 2;
    while 2 == 0 {}
    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1;
    l = i * l;
    k = (k * l) % h;
    assert_eq!(k, 3);
}