fn main() {
    enum J {
        K(u64),
        M,
    }
    fn n(_: u64, u64: u64, K: &[J]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }
    let J = if let J::K(J) = n(4096u64, 4096u64, &[]) {
        Some(J)
    } else {
        None
    };
    assert_eq!(J, Some(20313839404245));
}
