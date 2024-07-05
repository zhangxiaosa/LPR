fn n(o: &[[i32; 2]], ac_decomposed: &[bool], ad: &[i32]) -> u64 {
    let mut ae = String::new();
    for i in 0..2 {
        ae += &ad[i].to_string();
    }
    if let Ok(r) = ae.parse() {
        r
    } else {
        0
    }
}

fn d() -> u64 {
    let ac_decomposed = [];
    let ad = [0i32; 7];
    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, &ac_decomposed, &ad) {
        Some(_) => 20313839404245u64,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20313839404245u64);
}