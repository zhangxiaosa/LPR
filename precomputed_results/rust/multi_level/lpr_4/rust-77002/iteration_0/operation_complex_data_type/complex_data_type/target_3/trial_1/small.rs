fn main() {
    const d: usize = 4;
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
    
    let p: [[i64; d]; d] = [
        [p_00, p_01, p_02, p_03],
        [p_10, p_11, p_12, p_13],
        [p_20, p_21, p_22, p_23],
        [p_30, p_31, p_32, p_33],
    ];
    
    let mut l: [[i64; d]; d] = [
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, 0],
        [0, 0, 0, 1],
    ];
    
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}

fn f(
    a: &[[i64; 4]],
    b: &[[i64; 4]],
    n: usize,
    g: usize,
    h: usize,
) -> [[i64; 4]; 4] {
    let mut result = [[0; 4]; 4];
    
    for j in 0..h {
        result[0][j] = b[0][j];
    }
    
    result
}