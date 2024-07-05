fn d() -> Option<u64> {
    let o: [[i32; 2]; 16] = Default::default();
    let mut ae = String::new();
    ae += "00";
    if let Ok(r) = ae.parse() {
        match Option::Some(r) {
            Option::Some(_) => Some(20313839404245u64),
            _ => None,
        }
    } else {
        Option::None
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}