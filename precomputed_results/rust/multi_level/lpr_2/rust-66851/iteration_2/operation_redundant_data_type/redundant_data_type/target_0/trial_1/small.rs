fn main() {
    enum J {
        K(u64),
        M,
    }
    fn n(aa: i32, o: &[u64], p: i32, q: i32, ab: i32, ac: &[bool], ad: &[i32]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }
    let ac = vec![];
    let ad = vec![];
    let o: [u64; 16] = Default::default();
    let result = match n(7, &o, 4096, 4096, 0, &ac, &ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20313839404245));
}