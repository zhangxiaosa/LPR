fn d() -> Option<u64> {
    enum Option<T> {
        Some(T),
        None,
    }
    fn n(o_0_0: i32, o_0_1: i32, o_1_0: i32, o_1_1: i32, o_2_0: i32, o_2_1: i32, o_3_0: i32, o_3_1: i32, o_4_0: i32, o_4_1: i32, o_5_0: i32, o_5_1: i32, o_6_0: i32, o_6_1: i32, o_7_0: i32, o_7_1: i32, o_8_0: i32, o_8_1: i32, o_9_0: i32, o_9_1: i32, o_10_0: i32, o_10_1: i32, o_11_0: i32, o_11_1: i32, o_12_0: i32, o_12_1: i32, o_13_0: i32, o_13_1: i32, o_14_0: i32, o_14_1: i32, o_15_0: i32, o_15_1: i32, is_ac_decomposed: bool, ad: &[i32]) -> Option<u64> {
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
    let is_ac_decomposed = false;
    let ad: [i32; 7] = [0; 7];
    let o_0_0 = 0;
    let o_0_1 = 0;
    let o_1_0 = 0;
    let o_1_1 = 0;
    let o_2_0 = 0;
    let o_2_1 = 0;
    let o_3_0 = 0;
    let o_3_1 = 0;
    let o_4_0 = 0;
    let o_4_1 = 0;
    let o_5_0 = 0;
    let o_5_1 = 0;
    let o_6_0 = 0;
    let o_6_1 = 0;
    let o_7_0 = 0;
    let o_7_1 = 0;
    let o_8_0 = 0;
    let o_8_1 = 0;
    let o_9_0 = 0;
    let o_9_1 = 0;
    let o_10_0 = 0;
    let o_10_1 = 0;
    let o_11_0 = 0;
    let o_11_1 = 0;
    let o_12_0 = 0;
    let o_12_1 = 0;
    let o_13_0 = 0;
    let o_13_1 = 0;
    let o_14_0 = 0;
    let o_14_1 = 0;
    let o_15_0 = 0;
    let o_15_1 = 0;
    match n(
        o_0_0, o_0_1, o_1_0, o_1_1, o_2_0, o_2_1, o_3_0, o_3_1, o_4_0, o_4_1, o_5_0, o_5_1, o_6_0, o_6_1, o_7_0, o_7_1,
        o_8_0, o_8_1, o_9_0, o_9_1, o_10_0, o_10_1, o_11_0, o_11_1, o_12_0, o_12_1, o_13_0, o_13_1, o_14_0, o_14_1,
        o_15_0, o_15_1, is_ac_decomposed, &ad) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}