fn main() {
    const d: usize = 4;

    fn f(a: &[[i64; d]], b: &[[i64; d]], n: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0; d]; d];
        let n_unrolled = 2;
        for i in 0..n_unrolled {
            for j in 0..2 {
                l[i][j] = b[2][2];
            }
        }
        l
    }

    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d);
    println!("{:?}", l);
}