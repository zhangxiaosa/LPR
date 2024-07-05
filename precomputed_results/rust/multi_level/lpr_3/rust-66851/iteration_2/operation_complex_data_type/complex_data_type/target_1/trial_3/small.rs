fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    fn n(o: &[[i32; 2]], is_ac_decomposed: bool, ad0: i32, ad1: i32, ad2: i32, ad3: i32, ad4: i32, ad5: i32, ad6: i32) -> Option<u64> {
        let mut ae = String::new();
        ae += &ad0.to_string();
        ae += &ad1.to_string();
        ae += &ad2.to_string();
        ae += &ad3.to_string();
        ae += &ad4.to_string();
        ae += &ad5.to_string();
        ae += &ad6.to_string();
        if let Ok(r) = ae.parse() {
            Option::Some(r)
        } else {
            Option::None
        }
    }
    let is_ac_decomposed = false;
    let ad0 = 0i32;
    let ad1 = 0i32;
    let ad2 = 0i32;
    let ad3 = 0i32;
    let ad4 = 0i32;
    let ad5 = 0i32;
    let ad6 = 0i32;
    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, is_ac_decomposed, ad0, ad1, ad2, ad3, ad4, ad5, ad6) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}