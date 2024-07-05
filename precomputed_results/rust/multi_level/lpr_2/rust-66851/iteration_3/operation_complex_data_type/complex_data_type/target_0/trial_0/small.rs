fn main() {
    fn n(_p: u64, _q: u64) -> u64 {
        if let Ok(r) = "20313839404245".parse() {
            r
        } else {
            0
        }
    }
    let result = if let s = n(4096u64, 4096u64) {
        Some(s)
    } else {
        None
    };
    assert_eq!(result, Some(20313839404245));
}