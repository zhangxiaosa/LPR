fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        const UNROLL_FACTOR: usize = 2;
        let mut l = e::default();

        for i in (0..n).step_by(UNROLL_FACTOR) {
            for j in 0..(h - 1) {
                for k in 0..g {
                    l[i][j] = b[k][j];
                    l[i + 1][j] = b[k][j];
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