fn d() -> u64 {
    fn n(o: &[[i32; 2]], ac_decomposed: &[bool], ad: &[i32]) -> u64 {
        let mut ae = String::new();
        for i in 0..2 {
            ae += &ad[i].to_string();
        }
        if let Ok(r) = ae.parse() {
            r
        } else {
            None
        }
    }
    let o: [[i32; 2]; 16] = Default::default();
    match n(o, ac_decomposed, &ad) {
        Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), 20313839404245u64);
}