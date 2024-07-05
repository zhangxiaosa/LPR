fn main() {
    enum J {
        K(u64),
        M,
    }

    fn n(aa: i32, o: &[(i32, i32)], p: i32, q: i32, ab: i32, ac: &[bool], ad: &[i32]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }

    let ac: Vec<bool> = vec![];
    let ad: Vec<i32> = vec![];
    let o: &[(i32, i32)] = &[];
    let result = match n(7, o, 4096, 4096, 0, &ac, &ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20313839404245));
}