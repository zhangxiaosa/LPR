fn main() {
    let h = 5;
    let arg = 4;
    let i = 2;
    let j = 0;
    let mut k;
    k = arg;
    let mut l = 1;
    l = i * l % h;
    k = k * l % h;

    assert_eq!(k, 3);
}