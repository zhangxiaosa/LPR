fn main() {
    let mut k = 4;
    k = (k * 2) % 5;
    assert_eq!(k, 3);
}