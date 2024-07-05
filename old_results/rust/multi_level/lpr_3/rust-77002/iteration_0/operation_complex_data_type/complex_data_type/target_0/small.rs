fn main() {
    const d: usize = 4;
    const e_dim: usize = d;
    type e = [[i64; e_dim]; e_dim];
    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = [[0i64; e_dim]; e_dim];
        for i in 0..n {
            for j in 0..h {
                let temp_j = j;
                let k = 0;
                l[i][temp_j] = b[k][temp_j];
            }
        }
        l
    }
    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1i64, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    let q = l;
    println!("{:?}", q);
}
