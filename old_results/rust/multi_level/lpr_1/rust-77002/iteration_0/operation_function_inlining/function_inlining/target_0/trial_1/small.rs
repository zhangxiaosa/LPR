fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    fn o(a: [[i64; d]; d], m: usize, n: u64) -> [[i64; d]; d] {
        let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
        for i in 0..m {
            for j in 0..m {
                for k in 0..m {
                    l[i][j] = a[k][j];
                }
            }
        }
        l
    }
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let q = o(p, d, c);
    println!("{:?}", q);
}