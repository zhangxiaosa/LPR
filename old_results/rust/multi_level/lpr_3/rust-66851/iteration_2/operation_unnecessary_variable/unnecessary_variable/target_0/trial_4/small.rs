fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    
    fn n(o: &[[i32; 2]], is_ac_decomposed: bool, ad: &[i32]) -> Option<u64> {
        let mut ae = String::new();
        for i in 0..2 {
            ae += &ad[i].to_string();
        }
        if let Ok(r) = ae.parse() {
            Option::Some(r)
        } else {
            Option::None
        }
    }
    
    let ad = [0; 7];
    
    match n(&ad) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}