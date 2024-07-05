fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 12;

    enum Option<T> {
        Some(T),
        None,
    }

    fn n(
        aa: i32,
        o_0: [i32; 2],
        o_1: [i32; 2],
        o_2: [i32; 2],
        o_3: [i32; 2],
        o_4: [i32; 2],
        o_5: [i32; 2],
        o_6: [i32; 2],
        o_7: [i32; 2],
        o_8: [i32; 2],
        o_9: [i32; 2],
        o_10: [i32; 2],
        o_11: [i32; 2],
        o_12: [i32; 2],
        o_13: [i32; 2],
        o_14: [i32; 2],
        o_15: [i32; 2],
        p: i32,
        q: i32,
        ab: i32,
        ac_decomposed_0: bool,
        ad_0: i32
    ) -> Option<u64> {
        let mut ae = String::new();
        for i in 0..2 {
            ae += &ad_0.to_string();
        }

        if let Ok(r) = ae.parse() {
            Option::Some(r)
        } else {
            Option::None
        }
    }

    let ac_decomposed_0: bool = false;
    let ac_decomposed_1: bool = false;

    let ad_0 = 0;

    let o_0 = [0, 0];
    let o_1 = [0, 0];
    let o_2 = [0, 0];
    let o_3 = [0, 0];
    let o_4 = [0, 0];
    let o_5 = [0, 0];
    let o_6 = [0, 0];
    let o_7 = [0, 0];
    let o_8 = [0, 0];
    let o_9 = [0, 0];
    let o_10 = [0, 0];
    let o_11 = [0, 0];
    let o_12 = [0, 0];
    let o_13 = [0, 0];
    let o_14 = [0, 0];
    let o_15 = [0, 0];

    match n(e, o_0, o_1, o_2, o_3, o_4, o_5, o_6, o_7, o_8, o_9, o_10, o_11, o_12, o_13, o_14, o_15, f, f, 0, ac_decomposed_0, ad_0) {
        Option::Some(_) => Some(20313839404245u64),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20313839404245u64));
}