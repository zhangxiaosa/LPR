fn d() -> Option<u64> {
    let ad = [0i32; 7];
    let mut ae = ad[0].to_string();
    ae += &ad[1].to_string();
    if let Ok(r) = ae.parse() {
        Some(r)
    } else {
        None
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}