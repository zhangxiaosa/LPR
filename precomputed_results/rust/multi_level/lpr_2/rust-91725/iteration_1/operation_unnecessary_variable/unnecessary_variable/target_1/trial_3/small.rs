fn main() {
    assert_eq!(4 as u64 * {
        let result;
        if 0 == 0 {
            result = 2 * 2
        } else {
            result = 2
        }
        result
    } % 5, 3);
}