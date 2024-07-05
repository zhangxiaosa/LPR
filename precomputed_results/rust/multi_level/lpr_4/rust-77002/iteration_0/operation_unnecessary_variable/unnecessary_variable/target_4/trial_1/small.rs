fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let result = f(&l);
    println!("{:?}", result);
}

fn f(l: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result = [[0; 4]; 4];
    for j in 0..4 {
        result[0][j] = l[0][j];
    }
    result
}