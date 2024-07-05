fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];
    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        let n_unrolled = n / 2;
        for i in 0..n_unrolled {
            for j in 0..h {
                for k in 0..g {
                    let i_unrolled = i * 2;
                    l[i_unrolled][j] = b[k][j];
                    l[i_unrolled + 1][j] = b[k][j];
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