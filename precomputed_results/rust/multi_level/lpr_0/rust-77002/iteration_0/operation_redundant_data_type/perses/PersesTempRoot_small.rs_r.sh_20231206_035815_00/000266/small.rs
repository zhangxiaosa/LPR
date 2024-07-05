fn main() {
    const d: usize = 4;
    fn f(a: &[[i64; d]; d], b: &[[i64; d]; d], g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0; d]; d];
        let i = 0;
        l[i][0] = b[0][0];
        l
    }
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0      , 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d);
    println!("{:?}", l);
}
