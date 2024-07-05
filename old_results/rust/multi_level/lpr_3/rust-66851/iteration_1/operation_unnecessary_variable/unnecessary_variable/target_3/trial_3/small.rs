fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    fn n(_: &[[i32; 2]], _: &[bool], _: &[i32]) -> Option<u64> {
        let ae = "0".to_string();
        Option::Some(0)
    }
    match n(&Default::default(), &[], &[0i32; 1 << 7]) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}