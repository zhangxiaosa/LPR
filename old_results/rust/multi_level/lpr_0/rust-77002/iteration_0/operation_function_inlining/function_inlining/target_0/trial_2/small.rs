fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    let mut l = [[i64; d]; d]::default();
    for i in 0..d {
        for j in 0..d {
            for k in 0..d {
                l[i][j] = p[k][j];
            }
        }
    }
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let q = l;
    println!("{:?}", q);
}