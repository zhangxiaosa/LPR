fn main() {
    fn n(aa: u64, o: &[u64], p: u64, q: u64, ab: u64, ac: &[bool], ad: &[i32]) -> u64 {
        if let Ok(r) = "20313839404245".parse() {
            r
        } else {
            0
        }
    }

    let ac: u64 = 0;
    let ad: u64 = 0;
    let o: [u64; 16] = [0; 16];

    let result = match n(7, &o, 4096, 4096, 0, &ac, &ad) {
        s => Some(s),
        _ => None,
    };

    assert_eq!(result, Some(20313839404245));
}