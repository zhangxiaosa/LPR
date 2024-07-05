fn main() {
    enum J {
        K(u64),
    }

    fn n(ad: &[i32]) -> J {
        J::K("20313839404245".parse().unwrap())
    }

    let result = if let J::K(s) = n(&[]) {
        Some(s)
    } else {
        None
    };

    assert_eq!(result, Some(20313839404245));
}