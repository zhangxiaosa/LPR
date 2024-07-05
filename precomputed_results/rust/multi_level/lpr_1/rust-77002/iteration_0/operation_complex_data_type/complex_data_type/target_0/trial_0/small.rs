fn main() {
    const d: usize = 4;

    fn f(b: &[[i64; 4]], n: usize, g: usize, h: usize) -> [[i64; 4]; 4] {
        let mut l = [[0; 4]; 4];
        for i in 0..n {
            for j in (0..h).step_by(2) {
                for k in 0..g {
                    l[i][j] = b[k][j + 1];
                }
            }
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let a = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let a = f(&p, d, d, d);
    println!("{:?}", a);
}