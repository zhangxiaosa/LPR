fn main() {
    const d: usize = 4;

    fn f(a: &[[i64; d]], b: &[[i64; d]], n: usize, g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0i64; d]; d];
        for j in 0..h {
            l[0][j] = b[0][j];
            l[1][j] = b[0][j];
            l[2][j] = b[0][j];
            l[3][j] = b[0][j];
        }
        l
    }

    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1i64, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}