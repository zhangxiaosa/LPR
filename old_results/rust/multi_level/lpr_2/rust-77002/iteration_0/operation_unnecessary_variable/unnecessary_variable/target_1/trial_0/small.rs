fn main() {
    const d: usize = 4;

    fn f(a: &[[i64; d]], b: &[[i64; d]]) -> [[i64; d]; d] {
        let mut l = [[0; d]; d];
        for i in 0..2 {
            for j in 0..2 {
                l[i][j] = 2;
            }
        }
        l
    }

    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l);
    println!("{:?}", l);
}