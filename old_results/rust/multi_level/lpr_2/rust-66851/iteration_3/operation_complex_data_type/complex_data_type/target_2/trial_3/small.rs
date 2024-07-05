fn main() {
    fn n() -> Option<u64> {
        "20313839404245".parse().ok()
    }
    let result = n();
    assert_eq!(result, Some(20313839404245));
}