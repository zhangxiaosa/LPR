fn main() {
    let h: i32 = 5;
    let arg: i32 = 4;
    let i: i32 = 2;
    while 2 == 0 {}
    let mut k: i32;
    k = arg;
    let mut l: i32;
    l = 0;
    l |= 1;
    l = i * l;
    k = (k * l) % h;
    assert_eq!(k, 3);
}