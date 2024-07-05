fn main() {
    enum J {
        K(u64),
        M,
    }

    fn n(aa: u64, o: &[u64], p: u64, q: u64, ab: u64, ad: &[i32]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }

    let ad = vec![];
    let o: u64 = 0;

    let result = match n(7u64, &[o; 16], 4096u64, 4096u64, 0u64, &ad) {
        J::K(s) => Some(s),
        _ => None,
    };

    assert_eq!(result, Some(20313839404245));
}
