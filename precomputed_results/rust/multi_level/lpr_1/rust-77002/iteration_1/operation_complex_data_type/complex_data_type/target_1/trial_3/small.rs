fn main() {
    const d: usize = 4;

    fn f(a: &[i64], b: &[i64], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l: [i64; 4] = [0; 4];

        for j in (0..h).step_by(2) {
            l[j] = b[1];
            l[j + 1] = b[1];
        }

        l
    }

    let p_00: i64 = 0;
    let p_01: i64 = 1;
    let p_02: i64 = 0;
    let p_03: i64 = 0;
    let p_10: i64 = 0;
    let p_11: i64 = 0;
    let p_12: i64 = 1;
    let p_13: i64 = 0;
    let p_20: i64 = 0;
    let p_21: i64 = 0;
    let p_22: i64 = 0;
    let p_23: i64 = 1;
    let p_30: i64 = 1;
    let p_31: i64 = 2;
    let p_32: i64 = 2;
    let p_33: i64 = 2;

    let p: [[i64; 4]; 4] = [[p_00, p_01, p_02, p_03], [p_10, p_11, p_12, p_13], [p_20, p_21, p_22, p_23], [p_30, p_31, p_32, p_33]];

    let p_0: [i64; 4] = [p_00, p_01, p_02, p_03];
    let l_0: i64 = 0;
    let l_1: i64 = 1;
    let l_2: i64 = 0;
    let l_3: i64 = 0;

    l_0 = f(&p[0], &[l_0, l_1, l_2, l_3], d, d, d);

    println!("{:?}", l_0);
}