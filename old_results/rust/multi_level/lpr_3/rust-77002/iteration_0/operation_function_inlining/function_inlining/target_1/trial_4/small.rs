fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    for i in 0..d {
        for j in 0..d {
            for k in 0..d {
                l[i][j] = l[k][j];
            }
        }
    }
    println!("{:?}", l);
}