fn main() {
    const d: usize = 4;

    const p_0: i64 = 0;
    const p_1: i64 = 1;
    const p_2: i64 = 0;
    const p_3: i64 = 0;
    const p_4: i64 = 0;
    const p_5: i64 = 0;
    const p_6: i64 = 1;
    const p_7: i64 = 0;
    const p_8: i64 = 0;
    const p_9: i64 = 0;
    const p_10: i64 = 0;
    const p_11: i64 = 1;
    const p_12: i64 = 2;
    const p_13: i64 = 2;
    const p_14: i64 = 2;
    const p_15: i64 = 1;

    let mut l_0: i64 = 0;
    let mut l_1: i64 = 1;
    let mut l_2: i64 = 0;
    let mut l_3: i64 = 0;

    let p = [[p_0, p_1, p_2, p_3], [p_4, p_5, p_6, p_7], [p_8, p_9, p_10, p_11], [p_12, p_13, p_14, p_15]];

    l_0 = p[0][0];
    l_1 = p[0][1];
    l_2 = p[0][2];
    l_3 = p[0][3];

    println!("{:?}", [l_0, l_1, l_2, l_3]);
}