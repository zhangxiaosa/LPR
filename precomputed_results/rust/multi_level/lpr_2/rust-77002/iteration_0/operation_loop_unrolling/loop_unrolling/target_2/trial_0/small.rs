fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        let n_unrolled = n / 2;
        let g_unrolled = g / 2;
        for i in 0..(n_unrolled * 2) {
            let i_unrolled = i * 2;
            for j in 0..(h / 2) {
                for k in 0..g_unrolled {
                    l[i_unrolled][j * 2] = b[k * 2][j * 2];
                    l[i_unrolled][j * 2 + 1] = b[k * 2][j * 2 + 1];
                    l[i_unrolled + 1][j * 2] = b[k * 2][j * 2];
                    l[i_unrolled + 1][j * 2 + 1] = b[k * 2][j * 2 + 1];
                }
            }
            if h % 2 != 0 {
                for k in 0..g_unrolled {
                    l[i_unrolled][h - 1] = b[g_unrolled * 2 - 1][h - 1];
                    l[i_unrolled + 1][h - 1] = b[g_unrolled * 2 - 1][h - 1];
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