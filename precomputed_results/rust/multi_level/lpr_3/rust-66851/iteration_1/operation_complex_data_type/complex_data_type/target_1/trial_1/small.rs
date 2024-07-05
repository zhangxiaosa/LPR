fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 12;

    enum Option<u64> {
        Some(u64),
        None,
    }

    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac_decomposed: &[bool], ad: &[i32]) -> Option<u64> {
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

    let ac_decomposed: [bool; 0] = [];
    let ad: [i32; 128] = [0; 128];
    let o: [[i32; 2]; 16] = Default::default();

    match n(e, &o, f, f, 0, &ac_decomposed, &ad) {
        Option::Some(_) => Some(203_138_394_042_45),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(203_138_394_042_45));
}