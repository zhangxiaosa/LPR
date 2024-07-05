fn main() {
    let mut result_0 = 0i64;
    let mut result_1 = 0i64;
    let mut result_2 = 0i64;
    let mut result_3 = 0i64;
    let mut result_4 = 0i64;
    let mut result_5 = 0i64;
    let mut result_6 = 0i64;
    let mut result_7 = 0i64;
    let mut result_8 = 0i64;
    let mut result_9 = 0i64;
    let mut result_10 = 0i64;
    let mut result_11 = 0i64;
    let mut result_12 = 0i64;
    let mut result_13 = 0i64;
    let mut result_14 = 0i64;
    let mut result_15 = 0i64;

    let mut l_0 = 1i64;
    let mut l_1 = 0i64;
    let mut l_2 = 0i64;
    let mut l_3 = 0i64;
    let mut l_4 = 0i64;
    let mut l_5 = 1i64;
    let mut l_6 = 0i64;
    let mut l_7 = 0i64;
    let mut l_8 = 0i64;
    let mut l_9 = 0i64;
    let mut l_10 = 1i64;
    let mut l_11 = 0i64;
    let mut l_12 = 0i64;
    let mut l_13 = 0i64;
    let mut l_14 = 0i64;
    let mut l_15 = 1i64;

    let mut l = [[l_0, l_1, l_2, l_3], [l_4, l_5, l_6, l_7], [l_8, l_9, l_10, l_11], [l_12, l_13, l_14, l_15]];

    {
        let b_0 = &l;
        let b = b_0;
        {
            let mut result = [[result_0, result_1, result_2, result_3], [result_4, result_5, result_6, result_7], [result_8, result_9, result_10, result_11], [result_12, result_13, result_14, result_15]];
            result[0] = b_0[0].clone();
        }
    }

    println!("{:?}", l);
}