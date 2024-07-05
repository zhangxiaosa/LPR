fn main() {
    const d: usize = 4;

    fn f(a: [[i64; 4]; 4], b: [[i64; 4]; 4], n: usize, g: usize, h: usize) -> [[i64; 4]; 4] {
        let mut l = [[0i64; 4]; 4];
        for j in 0..h {
            l[0][j] = b[0][j];
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1i64, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(p, l, d, d, d);
    println!("{:?}", l);
}