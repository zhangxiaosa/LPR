use std::default::Default;

fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }

    let mut ae = String::new();
    ae += "00";
    if let Ok(r) = ae.parse() {
        Option::Some(r)
    } else {
        Option::None
    }

    let o: [[i32; 2]; 16] = Default::default();

    let mut ae = String::new();
    ae += "00";
    if let Ok(r) = ae.parse() {
        Option::Some(r)
    } else {
        Option::None
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}