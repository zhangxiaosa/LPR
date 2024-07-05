fn main() {
    enum J {
        K(&str),
        M,
    }

    fn n(aa: &str, o: &[&str], p: &str, q: &str, ab: &str, ac: &[bool], ad: &[i32]) -> J {
        if let Ok(r) = "20313839404245".parse::<u64>() {
            J::K(r as &str)
        } else {
            J::M
        }
    }

    let ac = vec![];
    let ad = vec![];
    let o: [&str; 16] = Default::default();

    let result = match n("7", &o, "4096", "4096", "0", &ac, &ad) {
        J::K(s) => Some(s),
        _ => None,
    };

    assert_eq!(result, Some("20313839404245"));
}