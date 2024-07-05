fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &[[i64; d]; d], b: &[[i64; d]; d], n: usize, g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[i64::default(); d]; d];
        for i in 0..n {
            for j in (0..h).step_by(2) {
                for k in 0..g {
                    l[i][j] = b[k][j];
                    l[i][j + 1] = b[k][j + 1];
                }
            }
        }
        l
    }

    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}