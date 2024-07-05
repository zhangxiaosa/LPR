fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn o(a: e, m: usize, n: u64) -> e {
        let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
        for i in 0..m {
            for j in 0..m {
                for k in 0..m {
                    l[i][j] = l[i][j];
                }
            }
        }
        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let q = o(p, d, c);
    println!("{:?}", q);
}