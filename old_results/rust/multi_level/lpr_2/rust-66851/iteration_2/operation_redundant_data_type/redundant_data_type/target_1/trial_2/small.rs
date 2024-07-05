fn main() {
    enum J {
        K(u64),
        M,
    }
    fn n(aa: i32, o: &[u64], p: i32, q: i32, ab: i32, ad: &[bool]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }
    let ad: &[bool] = &[];
    let o: [u64; 16] = Default::default();
    let result = match n(7, &o, 4096, 4096, 0, &ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20313839404245));
}