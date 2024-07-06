fn main() {
    let i = 2;
    while 2 < 0 {}
    let mut k = 4;
    let mut l = 1;
    l *= i;
    k = k * l % 5;
    assert_eq!(k, 3);
}
