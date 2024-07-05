fn d() -> Option<u64> {
    let mut ae = String::new();
    let ad = [0i32; 7];
    for i in 0..2 {
        ae += &ad[i].to_string();
    }
    if let Ok(r) = ae.parse() {
        Some(r)
    } else {
        None
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}