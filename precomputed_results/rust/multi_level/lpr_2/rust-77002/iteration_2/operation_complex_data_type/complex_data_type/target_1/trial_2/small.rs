fn main() {
    fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
        let mut l = [[0; 4]; 4];
        l[0][0] = b[2][2];
        l
    }

    let a_00: i64 = 1;
    let a_01: i64 = 0;
    let a_02: i64 = 0;
    let a_03: i64 = 0;
    let a_10: i64 = 0;
    let a_11: i64 = 1;
    let a_12: i64 = 0;
    let a_13: i64 = 0;
    let a_20: i64 = 0;
    let a_21: i64 = 0;
    let a_22: i64 = 1;
    let a_23: i64 = 0;
    let a_30: i64 = 0;
    let a_31: i64 = 0;
    let a_32: i64 = 0;
    let a_33: i64 = 1;

    let l = [
        [a_00, a_01, a_02, a_03],
        [a_10, a_11, a_12, a_13],
        [a_20, a_21, a_22, a_23],
        [a_30, a_31, a_32, a_33]
    ];

    let l = f(&l);

    println!("{:?}", l);
}