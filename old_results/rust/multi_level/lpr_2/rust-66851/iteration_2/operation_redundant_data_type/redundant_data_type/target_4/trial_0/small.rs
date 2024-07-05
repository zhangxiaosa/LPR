fn main() {
    fn n(aa: u64, o: &[u64], p: u64, q: u64, ab: u64, ac: &[bool], ad: &[i32]) -> u64 {
        if let Ok(r) = "20313839404245".parse::<u64>() {
            r
        } else {
            0
        }
    }

    let ac = vec![];
    let ad = vec![];
    let o: [u64; 16] = Default::default();

    let result = match n(7u64, &o, 4096u64, 4096u64, 0u64, &ac, &ad) {
        s => Some(s),
    };

    assert_eq!(result, Some(20313839404245));
}