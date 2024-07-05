fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    fn n(o: &[[i32; 2]], is_ac_decomposed: bool) -> Option<u64> {
        if let Ok(r) = "0000".parse() {
            Option::Some(r)
        } else {
            Option::None
        }
    }
    let is_ac_decomposed = false;
    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, is_ac_decomposed) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}