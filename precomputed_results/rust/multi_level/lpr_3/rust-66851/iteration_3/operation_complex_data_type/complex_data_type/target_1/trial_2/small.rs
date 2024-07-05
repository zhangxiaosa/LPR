fn n() -> Option<u64> {
    let mut ae = String::new();
    ae += "00";
    if let Ok(r) = ae.parse() {
        Option::Some(r)
    } else {
        Option::None
    }
}

fn d() -> Option<u64> {
    match n() {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}