fn main() {
    fn n(aa: i32, o: &[(i32, i32)], p: i32, q: i32, ab: i32, ac: &[bool], ad: &[i32]) -> (u64, ()) {
        if let Ok(r) = "20313839404245".parse() {
            (r, ())
        } else {
            (0, ())
        }
    }

    let ac: Vec<bool> = vec![];
    let ad: Vec<i32> = vec![];
    let o: [(i32, i32); 16] = Default::default();
    let result = match n(7, &o, 4096, 4096, 0, &ac, &ad) {
        (s, _) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20313839404245));
}