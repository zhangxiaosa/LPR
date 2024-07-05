fn d() -> Option<u64> {    
    enum Option<T> {    
        Some(T),    
        None,    
    }    
    fn n(o: &[    
    [i32; 2]; 16    
    ]) -> Option<u64> {    
        let mut ae = String::new();    
        ae += "00";    
        if let Ok(r) = ae.parse() {    
            Option::Some(r)    
        } else {    
            Option::None    
        }    
    }    
    let o_0_0: i32 = Default::default();    
    let o_0_1: i32 = Default::default();    
    let o_1_0: i32 = Default::default();    
    let o_1_1: i32 = Default::default();    
    let o_2_0: i32 = Default::default();    
    let o_2_1: i32 = Default::default();    
    let o_3_0: i32 = Default::default();    
    let o_3_1: i32 = Default::default();    
    let o_4_0: i32 = Default::default();    
    let o_4_1: i32 = Default::default();    
    let o_5_0: i32 = Default::default();    
    let o_5_1: i32 = Default::default();    
    let o_6_0: i32 = Default::default();    
    let o_6_1: i32 = Default::default();    
    let o_7_0: i32 = Default::default();    
    let o_7_1: i32 = Default::default();    
    let o_8_0: i32 = Default::default();    
    let o_8_1: i32 = Default::default();    
    let o_9_0: i32 = Default::default();    
    let o_9_1: i32 = Default::default();    
    let o_10_0: i32 = Default::default();    
    let o_10_1: i32 = Default::default();    
    let o_11_0: i32 = Default::default();    
    let o_11_1: i32 = Default::default();    
    let o_12_0: i32 = Default::default();    
    let o_12_1: i32 = Default::default();    
    let o_13_0: i32 = Default::default();    
    let o_13_1: i32 = Default::default();    
    let o_14_0: i32 = Default::default();    
    let o_14_1: i32 = Default::default();    
    let o_15_0: i32 = Default::default();    
    let o_15_1: i32 = Default::default();    
    let o = [    
        [o_0_0, o_0_1],    
        [o_1_0, o_1_1],    
        [o_2_0, o_2_1],    
        [o_3_0, o_3_1],    
        [o_4_0, o_4_1],    
        [o_5_0, o_5_1],    
        [o_6_0, o_6_1],    
        [o_7_0, o_7_1],    
        [o_8_0, o_8_1],    
        [o_9_0, o_9_1],    
        [o_10_0, o_10_1],    
        [o_11_0, o_11_1],    
        [o_12_0, o_12_1],    
        [o_13_0, o_13_1],    
        [o_14_0, o_14_1],    
        [o_15_0, o_15_1],    
    ];    
    match n(&o) {    
        Option::Some(_) => Some(20313839404245u64),    
        _ => None,    
    }    
}    
fn main() {    
    assert_eq!(d(), Some(20313839404245u64));    
}