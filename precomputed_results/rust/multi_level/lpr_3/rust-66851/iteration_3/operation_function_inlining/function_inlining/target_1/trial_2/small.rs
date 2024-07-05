fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    
    let mut ae = String::new();
    ae += "00";
    if let Ok(r) = ae.parse() {
        Some(r)
    } else {
        None
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}