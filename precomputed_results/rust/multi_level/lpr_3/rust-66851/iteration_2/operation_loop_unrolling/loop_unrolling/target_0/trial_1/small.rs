fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    fn n(o: &[[i32; 2]], ac_decomposed: &[bool], ad: &[i32]) -> Option<u64> {
        let mut ae = String::new();

        ae += &ad[0].to_string();
        ae += &ad[1].to_string();

        if let Ok(r) = ae.parse() {
            Option::Some(r)
        } else {
            Option::None
        }
    }

    let ac_decomposed = [];
    let ad = [0i32; 7];
    let o: [[i32; 2]; 16] = Default::default();

    match n(&o, &ac_decomposed, &ad) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}