fn main() {
    const d: usize = 4;

    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        for i in 0..n {
            for j in (0..h).step_by(2) {
                for k in (0..g).step_by(2) {
                    l[i][j] = b[k][j];
                    l[i][j + 1] = b[k][j + 1];
                    l[i][j + 2] = b[k + 1][j];
                    l[i][j + 3] = b[k + 1][j + 1];
                }
            }
        }
        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}