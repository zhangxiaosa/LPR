fn main() {
    const c: usize = 4;
    const d: u64 = c as _;
    type e = [[i64; c]; c];
    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        for i in 0..n {
            for j in 0..h {
                for k in 0..g {
                    l[i][j] = b[k][j]
                }
            }
        }
        l
    }
    fn o(a: e, m: usize, n: u64) -> e {
        let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
        {
            l = f(&a, &l, m, m, m)
        }
        l
    }
    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let q = o(p, c, d);
    println!("{:?}", q)
}
