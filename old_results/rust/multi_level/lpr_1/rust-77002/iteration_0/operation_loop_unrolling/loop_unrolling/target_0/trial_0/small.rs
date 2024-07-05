fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];
    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        for i in 0..n / 4 {
            l[i][j] = b[k][j];
            l[i+1][j] = b[k+1][j];
            l[i+2][j] = b[k+2][j];
            l[i+3][j] = b[k+3][j];
        }
        l
    }
    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}