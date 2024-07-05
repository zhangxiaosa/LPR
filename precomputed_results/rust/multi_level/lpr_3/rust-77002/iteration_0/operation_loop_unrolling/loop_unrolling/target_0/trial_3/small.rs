fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d * k];
    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        for k in 0..n/k {
            for j in 0..h {
                for k_idx in 0..g {
                    let i = k * k_idx;
                    l[i][j] = b[k_idx][j];
                }
            }
        }
        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d * k, d, d);
    let q = l;
    println!("{:?}", q);
}