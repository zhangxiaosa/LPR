fn main() {
    fn n(ad: &[i32]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }

    let result = if let J::K(s) = J::K(r) {
        Some(s)
    } else {
        None
    };

    assert_eq!(result, Some(r));
}