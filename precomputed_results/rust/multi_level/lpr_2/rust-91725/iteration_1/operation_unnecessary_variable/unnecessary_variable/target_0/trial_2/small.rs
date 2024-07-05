fn main() {
    assert_eq!(4 as u64 * (if 0 == 0 {2 * 2} else {2}) % 5, 3);
}