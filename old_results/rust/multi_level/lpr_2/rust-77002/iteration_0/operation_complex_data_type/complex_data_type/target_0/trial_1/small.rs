fn main() {
    const d: usize = 4;
    fn f(a: &[[i64; d]], b: &[[i64; d]], n: usize, g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0; d]; d];
        let n_unrolled: usize = 2;
        let g_unrolled: usize = 2;
        for i in 0..n_unrolled {
            let i_unrolled: usize = i;
            for j in 0..2 {
                l[i_unrolled][j] = b[g_unrolled][2];
            }
        }
        l
    }
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l: [[i64; d]; d] = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}