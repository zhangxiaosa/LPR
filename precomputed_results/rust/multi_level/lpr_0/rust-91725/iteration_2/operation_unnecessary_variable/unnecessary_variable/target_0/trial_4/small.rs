fn main() {
    let i = 2;
    let mut l;
    l = 1;
    l = i * l;
    let _ = (l * l) % 5;
    assert_eq!(_, 3);
}