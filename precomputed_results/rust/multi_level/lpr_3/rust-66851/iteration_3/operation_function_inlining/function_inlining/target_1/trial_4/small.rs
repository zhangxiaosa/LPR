fn main() {
    let result = {
        let mut ae = String::new();
        ae += "00";
        if let Ok(r) = ae.parse() {
            Some(r)
        } else {
            None
        }
    };

    assert_eq!(result, Some(20313839404245u64));
}