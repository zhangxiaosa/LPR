fn d() -> Option<u64> {
    enum ae<T> {
        Some(T),
        None,
    }
    fn n(_: &[[i32; 2]]) -> ae<u64> {
        let mut ae = String::new();
        ae += "00";
        if let Ok(ae) = ae.parse() {
            ae::Some(ae)
        } else {
            ae::None
        }
    }
    let ae: [[i32; 2]; 16] = Default::default();
    match n(&ae) {
        ae::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}
fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}
