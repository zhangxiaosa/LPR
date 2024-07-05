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
    // Optimized out result_0_2 (copy propagation)
    let mut result = [
        [0i64, 0i64, b[0][2], 0i64],
        [0i64, 0i64, 0i64, 0i64],
        [0i64, 0i64, 1i64, 0i64],
        [0i64, 0i64, 0i64, 0i64],
    ];
    result[0] = b[0];
    println!("{:?}", result);
    result
}