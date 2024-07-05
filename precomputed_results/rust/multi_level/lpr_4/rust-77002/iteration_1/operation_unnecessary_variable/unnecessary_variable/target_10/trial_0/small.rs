fn main() {
    let l_0_1 = 0i64;
    let l_2_2 = 1i64;
    let l_2_3 = 0i64;
    let l_3_0 = 0i64;
    let l_3_1 = 0i64;
    let l_3_2 = 0i64;
    let l_3_3 = 1i64;
    let mut l = [
        [1i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, 1, l_2_3],
        [l_3_0, l_3_1, l_3_2, l_3_3],
    ];
    l = f(&l);
    println!("{:?}", l);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let result_0_1 = 0i64;
    let result_2_2 = 1;
    let result_2_3 = 0i64;
    let result_3_0 = 0i64;
    let result_3_1 = 0i64;
    let result_3_2 = 0i64;
    let result_3_3 = 0i64;
    let mut result = [
        [0i64, result_0_1, 0i64, 0i64],
        [0i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, result_2_2, result_2_3],
        [result_3_0, result_3_1, result_3_2, result_3_3],
    ];
    result[0] = b[0];
    result
}