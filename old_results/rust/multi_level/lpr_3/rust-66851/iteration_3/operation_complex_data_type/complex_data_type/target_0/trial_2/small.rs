fn d() -> Option<u64> {
    fn n(o: &[[i32; 2]]) -> Option<u64> {
        let ae = "00";
        if let Ok(r) = ae.parse() {
            Some(r)
        } else {
            None
        }
    }

    let o = [[0; 2]; 16];
    match n(&o) {
        Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}