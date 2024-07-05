fn main() {
    const p_00: i64 = 0;
    const p_01: i64 = 1;
    const p_02: i64 = 0;
    const p_03: i64 = 0;
    const p_10: i64 = 0;
    const p_11: i64 = 0;
    const p_12: i64 = 1;
    const p_13: i64 = 0;
    const p_20: i64 = 0;
    const p_21: i64 = 0;
    const p_22: i64 = 0;
    const p_23: i64 = 1;
    const p_30: i64 = 1;
    const p_31: i64 = 2;
    const p_32: i64 = 2;
    const p_33: i64 = 2;

    let mut l_0: i64 = 0;
    let mut l_1: i64 = 1;
    let mut l_2: i64 = 0;
    let mut l_3: i64 = 0;
    {
        let a = &[p_00, p_01, p_02, p_03];
        let b = &[l_0, l_1, l_2, l_3];
        let _n: i64 = 4;
        let _g: i64 = 4;
        let _h: i64 = 4;
        let mut result_0: i64 = 0;
        let mut result_1: i64 = 0;
        let mut result_2: i64 = 0;
        let mut result_3: i64 = 0;

        result_0 = b[1];
        l_0 = result_0;
        l_1 = result_1;
        l_2 = result_2;
        l_3 = result_3;
    }
    println!("{:?}", [l_0, l_1, l_2, l_3]);
}