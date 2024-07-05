fn main() {
    let mut l_0_0 = 1i64;
    let mut l_0_1 = 0i64;
    let mut l_0_2 = 0i64;
    let mut l_0_3 = 0i64;
    let mut l_1_0 = 0i64;
    let mut l_1_1 = 1i64;
    let mut l_1_2 = 0i64;
    let mut l_1_3 = 0i64;
    let mut l_2_0 = 0i64;
    let mut l_2_1 = 0i64;
    let mut l_2_2 = 1i64;
    let mut l_2_3 = 0i64;
    let mut l_3_0 = 0i64;
    let mut l_3_1 = 0i64;
    let mut l_3_2 = 0i64;
    let mut l_3_3 = 1i64;

    let mut l = [
        [l_0_0, l_0_1, l_0_2, l_0_3],
        [l_1_0, l_1_1, l_1_2, l_1_3],
        [l_2_0, l_2_1, l_2_2, l_2_3],
        [l_3_0, l_3_1, l_3_2, l_3_3],
    ];
    l = f(&l);
    println!("{:?}", l);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result_0_0 = 0i64;
    let mut result_0_1 = 0i64;
    let mut result_0_2 = 0i64;
    let mut result_0_3 = 0i64;
    let mut result_1_0 = 0i64;
    let mut result_1_1 = 0i64;
    let mut result_1_2 = 0i64;
    let mut result_1_3 = 0i64;
    let mut result_2_0 = 0i64;
    let mut result_2_1 = 0i64;
    let mut result_2_2 = 0i64;
    let mut result_2_3 = 0i64;
    let mut result_3_0 = 0i64;
    let mut result_3_1 = 0i64;
    let mut result_3_2 = 0i64;
    let mut result_3_3 = 0i64;

    let mut result = [
        [result_0_0, result_0_1, result_0_2, result_0_3],
        [result_1_0, result_1_1, result_1_2, result_1_3],
        [result_2_0, result_2_1, result_2_2, result_2_3],
        [result_3_0, result_3_1, result_3_2, result_3_3],
    ];
    result[0] = b[0].clone();
    result
}
