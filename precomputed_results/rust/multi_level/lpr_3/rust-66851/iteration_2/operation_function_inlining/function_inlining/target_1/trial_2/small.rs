fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }

    let mut ae = String::new();
    let ad = [0i32; 7];
    for i in 0..2 {
        ae += &ad[i].to_string();
    }
    if let Ok(r) = ae.parse() {
        Option::Some(r)
    } else {
        Option::None
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}