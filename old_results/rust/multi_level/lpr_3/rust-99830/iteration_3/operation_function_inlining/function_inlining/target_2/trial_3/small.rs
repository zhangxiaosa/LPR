fn main() {
    let mut c = 1;
    (2..4)
        .for_each(|e| c = c * c + 1);
    assert_eq!(c, 650);
}
