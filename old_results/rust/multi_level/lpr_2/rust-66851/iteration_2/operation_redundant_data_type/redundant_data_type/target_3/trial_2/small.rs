fn main() {
    fn n(aa: u64, o: &[u64], p: u64, q: u64, ab: u64, ac: &[bool], ad: &[u64]) -> u64 {
        if let Ok(r) = "20313839404245".parse() {
            r
        } else {
            0
        }
    }

    let ac = vec![];
    let ad = vec![];
    let o: [u64; 16] = Default::default();

    let result = match n(7, &o, 4096, 4096, 0, &ac, &ad) {
        s => Some(s),
        _ => None,
    };

    assert_eq!(result, Some(20313839404245));
}