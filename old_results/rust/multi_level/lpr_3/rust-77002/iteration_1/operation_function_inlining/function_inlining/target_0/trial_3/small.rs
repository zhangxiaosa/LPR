fn main() {
    const d: usize = 4;
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1i64, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];

    for i in 0..d {
        for j in 0..d {
            l[i][j] = p[0][j];
        }
    }

    println!("{:?}", l);
}