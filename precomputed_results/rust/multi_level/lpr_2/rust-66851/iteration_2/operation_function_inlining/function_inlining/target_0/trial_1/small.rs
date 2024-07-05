fn main() {
    enum J {
        K(u64),
        M,
    }

    let ac = vec![];
    let ad = vec![];
    let o: [(i32, i32); 16] = Default::default();

    let result = match if let Ok(r) = "20313839404245".parse() {
        J::K("20313839404245".parse().unwrap())
    } else {
        J::M
    } {
        J::K(s) => Some(s),
        _ => None,
    };

    assert_eq!(result, Some(20313839404245));
}