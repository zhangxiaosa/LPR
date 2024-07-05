fn main() {
    enum J {
        K(u64),
        M,
    }

    let ac = vec![];
    let ad = vec![];
    let o: [(i32, i32); 16] = Default::default();

    let result = {
        if let Ok(r) = "20313839404245".parse() {
            Some(r)
        } else {
            None
        }
    };

    assert_eq!(result, Some(20313839404245));
}