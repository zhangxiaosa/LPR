fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];
    fn f(a: &e, b: &e, g: usize, h: usize) -> e {
        let mut l = e::default();
        let i = 0;  // Unrolled value of `i`
        for j in 0..h {
            for k in 0..g {
                l[i][j] = b[k][j];  // Updated loop variable `i`
            }
        }
        l
    }
    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d);
    println!("{:?}", l);
}