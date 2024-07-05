fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }

    fn n(o: &[[i32; 2]]) -> Option<u64> {
        let mut ae = String::new();
        ae += "00";
        if let Ok(_) = ae.parse() {
            Some(20313839404245u64)
        } else {
            None
        }
    }

    let o: [[i32; 2]; 16] = Default::default();
    n(&o)
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}