fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    type e = [[i64; d]; d];

    // Inlined f function
    let mut l = e::default();
    for i in 0..d {
        for j in 0..d {
            for k in 0..d {
                l[i][j] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]][k][j];
            }
        }
    }

    // Inlined o function
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    // Inlined f function
    for i in 0..d {
        for j in 0..d {
            for k in 0..d {
                l[i][j] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]][k][j];
            }
        }
    }

    // Rest of the main function
    let q = l;
    println!("{:?}", q);
}