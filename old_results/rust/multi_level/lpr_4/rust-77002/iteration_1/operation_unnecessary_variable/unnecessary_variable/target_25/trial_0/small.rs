fn main() {
    let mut l = [
        [1i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, 1i64, 0i64],
        [0i64, 0i64, 0i64, 1i64],
    ];
    l = f(&l);
    println!("{:?}", l);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result = [
        [0i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, 1i64, 0i64],
        [0i64, 0i64, 0i64, 0i64],
    ];
    result[0] = b[0];
    // result_2_1 is not modified, so its optimized value is 0
    result
}