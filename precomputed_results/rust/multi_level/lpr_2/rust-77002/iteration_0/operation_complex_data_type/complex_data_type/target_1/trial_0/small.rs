fn main() {
    const d: usize = 4;

    fn f(a: &[[i64; d]], b: &[[i64; d]], n: usize, g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0; d]; d];
        let n_unrolled = 2;
        let g_unrolled = 2;

        for i in 0..n_unrolled {
            let i_unrolled = i;

            for j in 0..2 {
                l[i_unrolled][j] = b[g_unrolled][2];
            }
        }
        l
    }

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

    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&[[p_00, p_01, p_02, p_03], [p_10, p_11, p_12, p_13], [p_20, p_21, p_22, p_23], [p_30, p_31, p_32, p_33]], &l, d, d, d);
    println!("{:?}", l);
}