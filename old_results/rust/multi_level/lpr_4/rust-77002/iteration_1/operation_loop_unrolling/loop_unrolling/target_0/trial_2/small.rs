fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&l);
    println!("{:?}", l);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result = [[0; 4]; 4];
    result[0] = b[0];
    result[1] = b[1];
    result[2] = b[2];
    result[3] = b[3];
    result
}