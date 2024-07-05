fn main() {
    const d: usize = 4;
    let mut l = [[1; d]; d];
    let mut result = [[0; d]; d];

    l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];

    for j in 0..d {
        l[0][j] = l[0][j];
    }

    println!("{:?}", l);
}

fn f(_: &[[i64; 4]], b: &[[i64; 4]], _: usize, _: usize, _: usize) -> [[i64; 4]; 4] {
    let mut result = [[0; 4]; 4];
    for j in 0..d {
        result[0][j] = b[0][j];
    }
    result
}