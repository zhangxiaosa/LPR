fn main() {
    let mut l_0_0: i64 = 1;
    let mut l_0_1: i64 = 0;
    let mut l_0_2: i64 = 0;
    let mut l_0_3: i64 = 0;

    let mut l_1_0: i64 = 0;
    let mut l_1_1: i64 = 1;
    let mut l_1_2: i64 = 0;
    let mut l_1_3: i64 = 0;

    let mut l_2_0: i64 = 0;
    let mut l_2_1: i64 = 0;
    let mut l_2_2: i64 = 1;
    let mut l_2_3: i64 = 0;

    let mut l_3_0: i64 = 0;
    let mut l_3_1: i64 = 0;
    let mut l_3_2: i64 = 0;
    let mut l_3_3: i64 = 1;

    let mut l: [[i64; 4]; 4] = [
        [l_0_0, l_0_1, l_0_2, l_0_3],
        [l_1_0, l_1_1, l_1_2, l_1_3],
        [l_2_0, l_2_1, l_2_2, l_2_3],
        [l_3_0, l_3_1, l_3_2, l_3_3],
    ];

    l = f(&l);
    println!("{:?}", l);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result_0_0: i64 = 0;
    let mut result_0_1: i64 = 0;
    let mut result_0_2: i64 = 0;
    let mut result_0_3: i64 = 0;

    let mut result_1_0: i64 = 0;
    let mut result_1_1: i64 = 0;
    let mut result_1_2: i64 = 0;
    let mut result_1_3: i64 = 0;

    let mut result_2_0: i64 = 0;
    let mut result_2_1: i64 = 0;
    let mut result_2_2: i64 = 0;
    let mut result_2_3: i64 = 0;

    let mut result_3_0: i64 = 0;
    let mut result_3_1: i64 = 0;
    let mut result_3_2: i64 = 0;
    let mut result_3_3: i64 = 0;

    let mut result: [[i64; 4]; 4] = [
        [result_0_0, result_0_1, result_0_2, result_0_3],
        [result_1_0, result_1_1, result_1_2, result_1_3],
        [result_2_0, result_2_1, result_2_2, result_2_3],
        [result_3_0, result_3_1, result_3_2, result_3_3],
    ];

    result[0] = [b[0][0], b[0][1], b[0][2], b[0][3]];

    result
}