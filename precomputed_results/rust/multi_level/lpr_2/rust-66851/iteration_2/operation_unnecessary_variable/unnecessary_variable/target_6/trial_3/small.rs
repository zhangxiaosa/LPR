fn main() {
    enum J {
        K(u64),
        M,
    }

    fn n(_p: u64, _q: u64, ad: &[i32]) -> J {
        let r = 20313839404245;  // Constant propagation optimization
        J::K(r)
    }

    let result = if let J::K(s) = n(4096u64, 4096u64, &[]) {
        Some(s)
    } else {
        None
    };

    assert_eq!(result, Some(20313839404245));
}