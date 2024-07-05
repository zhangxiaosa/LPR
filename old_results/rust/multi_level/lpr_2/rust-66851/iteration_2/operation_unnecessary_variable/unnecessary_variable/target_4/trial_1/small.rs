fn main() {
    enum J {
        K(u64),
        M,
    }

    fn n(_p: u64, _q: u64, _ad: &[i32]) -> J {
        J::K(20313839404245)
    }

    let result = Some(20313839404245);

    assert_eq!(result, Some(20313839404245));
}