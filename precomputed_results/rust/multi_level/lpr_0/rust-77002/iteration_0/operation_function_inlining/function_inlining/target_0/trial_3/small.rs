fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    for i in 0..d {
        for j in 0..c {
            for k in 0..d {
                l[i][j] = l[k][j];
            }
        }
    }
    let q = l;
    println!("{:?}", q);
}