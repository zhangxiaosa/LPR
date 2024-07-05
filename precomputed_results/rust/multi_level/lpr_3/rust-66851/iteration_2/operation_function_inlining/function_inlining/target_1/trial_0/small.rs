fn main() {
    assert_eq!(
        if let Ok(r) = {
            let mut ae = String::new();
            for i in 0..2 {
                ae += &ad[i].to_string();
            }
            ae.parse()
        } {
            Option::Some(_) if r == 20313839404245u64 => Some(20313839404245u64),
            _ => None,
        },
        Some(20313839404245u64),
    );
}