fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }

    fn n(o: &[[i32; 2]], _: bool) -> Option<u64> {
        if let Ok(_) = "0000".parse::<u64>() {
            Option::Some(0)
        } else {
            Option::None
        }
    }

    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, false) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}