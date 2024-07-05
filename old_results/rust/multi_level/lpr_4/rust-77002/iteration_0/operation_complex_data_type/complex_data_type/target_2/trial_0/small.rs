fn main() {
    const d: usize = 4;
    let p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let l: [[i64; d]; d] = f(&p, d, d, d);
    println!("{:?}", l);
}

fn f(a: &[[i64; 4]], n: usize, g: usize, h: usize) -> [[i64; 4]; 4] {
    let mut result = [[0; 4]; 4];
    for j in 0..h {
        result[0][j] = a[0][j];
    }
    result
}