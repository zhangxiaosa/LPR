fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];
    fn f(a: &[[i64; d]; d], b: &[[i64; d]; d], n: usize, g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0; d]; d];
        for i in 0..n {
            for j in 0..h {
                let temp_j: usize = j;
                let k: usize = 0;
                l[i][temp_j] = b[k][temp_j];
            }
        }
        l
    }
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l: [[i64; d]; d] = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    let q: [[i64; d]; d] = l;
    println!("{:?}", q);
}