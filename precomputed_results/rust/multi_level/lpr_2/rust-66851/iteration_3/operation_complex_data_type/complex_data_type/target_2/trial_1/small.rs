fn main() {
    enum J {
        K(u64),
        M,
    }
    fn n(_p: u64, _q: u64, ad: &[i32]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }
    let result = match n(4096u64, 4096u64, &[]) {
        J::K(s) => Some(s),
        J::M => None,
    };
    let optimized_result = result.unwrap_or_default();
    assert_eq!(optimized_result, 0);
}