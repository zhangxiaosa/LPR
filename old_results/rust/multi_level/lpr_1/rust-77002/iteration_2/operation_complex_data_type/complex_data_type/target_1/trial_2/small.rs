fn main() {
    fn f(a: &[i64], b: &[i64], _n: i64, _g: i64, _h: i64) -> [i64; 4] {
        let mut result_0 = 0;
        let mut result_1 = 0;
        let mut result_2 = 0;
        let mut result_3 = 0;
        let mut result = [result_0, result_1, result_2, result_3];
        result[0] = b[1];
        result
    }

    let p_00 = 0;
    let p_01 = 1;
    let p_02 = 0;
    let p_03 = 0;
    let p_10 = 0;
    let p_11 = 0;
    let p_12 = 1;
    let p_13 = 0;
    let p_20 = 0;
    let p_21 = 0;
    let p_22 = 0;
    let p_23 = 1;
    let p_30 = 1;
    let p_31 = 2;
    let p_32 = 2;
    let p_33 = 2;
    let p = [[p_00, p_01, p_02, p_03], [p_10, p_11, p_12, p_13], [p_20, p_21, p_22, p_23], [p_30, p_31, p_32, p_33]];

    let mut l_0 = 0;
    let mut l_1 = 1;
    let mut l_2 = 0;
    let mut l_3 = 0;
    let mut l = [l_0, l_1, l_2, l_3];
    l = f(&p[0], &l, 4, 4, 4);

    println!("{:?}", l);
}