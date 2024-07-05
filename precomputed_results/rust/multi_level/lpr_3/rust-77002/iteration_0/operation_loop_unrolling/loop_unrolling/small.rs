fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        const UNROLL_FACTOR: usize = 2;
        let mut l = e::default();

        for i in (0..n).step_by(UNROLL_FACTOR) {
            for j in 0..h {
                let mut temp_j = j;
                while temp_j < h {
                    let k = 0;
                    l[i][temp_j] = b[k][temp_j];
                    l[i + 1][temp_j] = b[k][temp_j];

                    let k = 1;
                    l[i][temp_j] = b[k][temp_j];
                    l[i + 1][temp_j] = b[k][temp_j];

                    temp_j += UNROLL_FACTOR;
                }
            }
        }

        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    let q = l;
    println!("{:?}", q);
}
