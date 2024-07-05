fn d() -> Option<u64> {
    let ac_decomposed = [];
    let ad = [0i32; 7];
    let o: [[i32; 2]; 16] = Default::default();

    let mut ae = String::new();
    for i in 0..2 {
        ae += &ad[i].to_string();
    }
    if let Ok(r) = ae.parse() {
        Some(r)
    } else {
        None
    }
}

fn main() {
    assert_eq!(
        {
            let ac_decomposed = [];
            let ad = [0i32; 7];
            let o: [[i32; 2]; 16] = Default::default();

            let mut ae = String::new();
            for i in 0..2 {
                ae += &ad[i].to_string();
            }
            if let Ok(r) = ae.parse() {
                Some(r)
            } else {
                None
            }
        },
        Some(20313839404245u64),
    );
}
