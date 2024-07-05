fn d() -> u64 {
    fn n(o: &[[i32; 2]], ac_decomposed: bool, ad: &[i32]) -> u64 {
        let ae = ad.iter().sum::<i32>().to_string();
        if let Ok(r) = ae.parse() {
            r
        } else {
            None
        }
    }
    let ac_decomposed: bool = false;
    let ad = [0i32; 7];
    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, ac_decomposed, &ad) {
        Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}