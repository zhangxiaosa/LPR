fn main() {
    let i = 2;
    let mut l;
    l = 1;
    l = i * l;
    let k = (4 * l) % 5;
    assert_eq!(k, 3);
}