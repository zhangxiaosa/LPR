fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    let p = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut q = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let mut q_temp = [[0; 4]; 4];  // Temporary matrix to store intermediate values
    for i in 0..d {
        for j in 0..d {
            for k in 0..d {
                q_temp[i][j] = q_temp[i][j] + p[k][j];
            }
        }
    }
    q = q_temp;
    println!("{:?}", q);
}