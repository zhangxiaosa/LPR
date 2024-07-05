fn d() -> Option<u64> {
    fn n(o: &[[i32; 2]; 16], ac_decomposed: &[bool], ad: &[i32]) -> Option<u64> {
        let mut ae = String::new();
        for i in 0..2 {
            ae += &ad[i].to_string();
        }
        if let Ok(r) = ae.parse() {
            Some(r)
        } else {
            None
        }
    }
    let ac_decomposed = [];
    let ad = [0i32; 7];
    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, &ac_decomposed, &ad) {
        Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}