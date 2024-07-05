fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    fn n(o: &[[i32; 2]]) -> Option<u64> {
        let mut ae = String::new();
        ae += "00";
        if let Ok(r) = ae.parse() {
            Option::Some(r)
        } else {
            Option::None
        }
    }
    let o_0: [i32; 2] = [Default::default(); 2];
    let o_1: [i32; 2] = [Default::default(); 2];
    let o_2: [i32; 2] = [Default::default(); 2];
    let o_3: [i32; 2] = [Default::default(); 2];
    let o_4: [i32; 2] = [Default::default(); 2];
    let o_5: [i32; 2] = [Default::default(); 2];
    let o_6: [i32; 2] = [Default::default(); 2];
    let o_7: [i32; 2] = [Default::default(); 2];
    let o_8: [i32; 2] = [Default::default(); 2];
    let o_9: [i32; 2] = [Default::default(); 2];
    let o_10: [i32; 2] = [Default::default(); 2];
    let o_11: [i32; 2] = [Default::default(); 2];
    let o_12: [i32; 2] = [Default::default(); 2];
    let o_13: [i32; 2] = [Default::default(); 2];
    let o_14: [i32; 2] = [Default::default(); 2];
    let o_15: [i32; 2] = [Default::default(); 2];
    let o_0_0: i32 = Default::default();
    let o_0_1: i32 = Default::default();
    let o_1_0: i32 = Default::default();
    let o_1_1: i32 = Default::default();
    let o_2_0: i32 = Default::default();
    let o_2_1: i32 = Default::default();
    // ... repeat for o_3, o_4, ..., o_15
    match n(&[o_0, o_1, o_2, o_3, o_4, o_5, o_6, o_7, o_8, o_9, o_10, o_11, o_12, o_13, o_14, o_15]) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}