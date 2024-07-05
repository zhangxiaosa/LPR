fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        for i in 0..n {
            // Unroll the loop for j in 0..h
            let mut j = 0;
            l[i][j] = b[0][j];
            j += 1;
            l[i][j] = b[0][j];
            j += 1;
            l[i][j] = b[0][j];
            j += 1;
            l[i][j] = b[0][j];
            // End of unrolled loop
        }
        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];

    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}