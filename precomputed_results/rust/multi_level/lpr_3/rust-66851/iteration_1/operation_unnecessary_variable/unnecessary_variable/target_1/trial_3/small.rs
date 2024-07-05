fn d() -> Option<u64> {
    const f: i32 = 12;
    enum Option<T> {
        Some(T),
        None,
    }
    fn n(
        o: &[[i32; 2]],
        p: i32,
        q: i32,
        _ab: i32,  // Optimized out
        ac_decomposed: &[bool],
        ad: &[i32],
    ) -> Option<u64> {
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
    let ac_decomposed = [];
    let ad = [0i32; 1 << 7];
    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, f, f, 0, &ac_decomposed, &ad) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}