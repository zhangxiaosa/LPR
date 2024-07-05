fn main() {
    const d: usize = 4;
    fn f(a: &[[i64; d]; d], b: &[[i64; d]; d], n: usize, g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[i64; d]; d]::default();
        for j in 0..h {
            l[0][j] = b[0][j];
        }
        l
    }
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l: [[i64; d]; d] = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}