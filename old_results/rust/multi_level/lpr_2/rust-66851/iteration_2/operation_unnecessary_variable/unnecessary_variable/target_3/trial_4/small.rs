fn main() {
    enum J {
        K(u64),
        M,
    }

    fn n() -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }

    let result = if let J::K(s) = n() {
        Some(s)
    } else {
        None
    };

    assert_eq!(result, Some(20313839404245));
}
