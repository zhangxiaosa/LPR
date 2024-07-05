fn main() {
    const d: usize = 4;

    fn f(a: &[[i64; 4]], b: &[[i64; 4]], n: usize, g: usize, h: usize) -> [[i64; 4]; 4] {
        let mut l_00: i64;
        let mut l_01: i64;
        let mut l_02: i64;
        let mut l_03: i64;

        let mut l_10: i64;
        let mut l_11: i64;
        let mut l_12: i64;
        let mut l_13: i64;

        let mut l_20: i64;
        let mut l_21: i64;
        let mut l_22: i64;
        let mut l_23: i64;

        let mut l_30: i64;
        let mut l_31: i64;
        let mut l_32: i64;
        let mut l_33: i64;

        for i in 0..n {
            for j in (0..h).step_by(2) {
                for k in 0..g {
                    l_10 = b[k][j + 1];
                }
            }
        }

        [
            [l_00, l_01, l_02, l_03],
            [l_10, l_11, l_12, l_13],
            [l_20, l_21, l_22, l_23],
            [l_30, l_31, l_32, l_33],
        ]
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];

    let mut l_00: i64 = 1;
    let mut l_01: i64 = 0;
    let mut l_02: i64 = 0;
    let mut l_03: i64 = 0;

    let mut l_10: i64 = 0;
    let mut l_11: i64 = 1;
    let mut l_12: i64 = 0;
    let mut l_13: i64 = 0;

    let mut l_20: i64 = 0;
    let mut l_21: i64 = 0;
    let mut l_22: i64 = 1;
    let mut l_23: i64 = 0;

    let mut l_30: i64 = 0;
    let mut l_31: i64 = 0;
    let mut l_32: i64 = 0;
    let mut l_33: i64 = 1;

    let temp_l = f(&p, &[(l_00, l_01, l_02, l_03), (l_10, l_11, l_12, l_13), (l_20, l_21, l_22, l_23), (l_30, l_31, l_32, l_33)], d, d, d);
    l_00 = temp_l[0][0];
    l_01 = temp_l[0][1];
    l_02 = temp_l[0][2];
    l_03 = temp_l[0][3];
    l_10 = temp_l[1][0];
    l_11 = temp_l[1][1];
    l_12 = temp_l[1][2];
    l_13 = temp_l[1][3];
    l_20 = temp_l[2][0];
    l_21 = temp_l[2][1];
    l_22 = temp_l[2][2];
    l_23 = temp_l[2][3];
    l_30 = temp_l[3][0];
    l_31 = temp_l[3][1];
    l_32 = temp_l[3][2];
    l_33 = temp_l[3][3];

    println!("{:?}", (l_00, l_01, l_02, l_03, l_10, l_11, l_12, l_13, l_20, l_21, l_22, l_23, l_30, l_31, l_32, l_33));
}