fn main() {
    let p = [];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l);
    println!("{:?}", l);
}

fn f(a: &[i64], b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result = [[0; 4]; 4];
    for j in 0..4 {
        result[0][j] = b[0][j];
    }
    result
}
