fn main() {
    enum J {
        K(u64),
        M,
    }

    fn n(_q: u64, ad: &[i32]) -> J {
        let r = 20313839404245;
        J::K(r)
    }

    let result = Some(20313839404245);

    assert!(result.is_some());
}