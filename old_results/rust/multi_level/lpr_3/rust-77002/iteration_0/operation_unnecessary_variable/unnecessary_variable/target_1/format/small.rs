fn main() {
    const d: usize = 4;

    fn f(a: &[[i64; d]], b: &[[i64; d]], n: usize, g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0i64; d]; d];
        for i in 0..n {
            for j in 0..h {
                let temp_j = j;
                l[i][temp_j] = b[0][temp_j];
            }
        }
        l
    }

    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1i64, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}
