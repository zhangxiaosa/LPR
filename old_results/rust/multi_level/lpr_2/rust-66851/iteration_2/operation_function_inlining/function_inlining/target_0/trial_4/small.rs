fn main() {
    enum J {
        K(u64),
        M,
    }
    let result = match {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    } {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20313839404245));
}