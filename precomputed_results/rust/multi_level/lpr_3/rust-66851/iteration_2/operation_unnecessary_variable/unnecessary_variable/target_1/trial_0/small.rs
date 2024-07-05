fn main() {
    let o: [[i32; 2]; 16] = Default::default();
    match n(&o, false) {
        Some(_) => Some(20313839404245u64),
        _ => None,
    }
}