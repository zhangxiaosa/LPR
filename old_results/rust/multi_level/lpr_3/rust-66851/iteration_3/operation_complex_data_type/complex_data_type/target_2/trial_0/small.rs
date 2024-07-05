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
    let o_0: [i32; 2] = Default::default();
    let o_1: [i32; 2] = Default::default();
    let o_2: [i32; 2] = Default::default();
    let o_3: [i32; 2] = Default::default();
    let o_4: [i32; 2] = Default::default();
    let o_5: [i32; 2] = Default::default();
    let o_6: [i32; 2] = Default::default();
    let o_7: [i32; 2] = Default::default();
    let o_8: [i32; 2] = Default::default();
    let o_9: [i32; 2] = Default::default();
    let o_10: [i32; 2] = Default::default();
    let o_11: [i32; 2] = Default::default();
    let o_12: [i32; 2] = Default::default();
    let o_13: [i32; 2] = Default::default();
    let o_14: [i32; 2] = Default::default();
    let o_15: [i32; 2] = Default::default();
    let o_0_0: i32 = o_0[0];
    let o_0_1: i32 = o_0[1];
    let o_1_0: i32 = o_1[0];
    let o_1_1: i32 = o_1[1];
    let o_2_0: i32 = o_2[0];
    let o_2_1: i32 = o_2[1];
    let o_3_0: i32 = o_3[0];
    let o_3_1: i32 = o_3[1];
    let o_4_0: i32 = o_4[0];
    let o_4_1: i32 = o_4[1];
    let o_5_0: i32 = o_5[0];
    let o_5_1: i32 = o_5[1];
    let o_6_0: i32 = o_6[0];
    let o_6_1: i32 = o_6[1];
    let o_7_0: i32 = o_7[0];
    let o_7_1: i32 = o_7[1];
    let o_8_0: i32 = o_8[0];
    let o_8_1: i32 = o_8[1];
    let o_9_0: i32 = o_9[0];
    let o_9_1: i32 = o_9[1];
    let o_10_0: i32 = o_10[0];
    let o_10_1: i32 = o_10[1];
    let o_11_0: i32 = o_11[0];
    let o_11_1: i32 = o_11[1];
    let o_12_0: i32 = o_12[0];
    let o_12_1: i32 = o_12[1];
    let o_13_0: i32 = o_13[0];
    let o_13_1: i32 = o_13[1];
    let o_14_0: i32 = o_14[0];
    let o_14_1: i32 = o_14[1];
    let o_15_0: i32 = o_15[0];
    let o_15_1: i32 = o_15[1];
    match n(&o) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}