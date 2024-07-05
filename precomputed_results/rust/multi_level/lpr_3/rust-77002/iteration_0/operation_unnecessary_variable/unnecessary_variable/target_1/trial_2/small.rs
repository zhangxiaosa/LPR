fn main() {
    fn f(a: &[[i64; 4]], b: &[[i64; 4]], n: usize, g: usize, h: usize) -> [[i64; 4]; 4] {
        let mut l = [[0i64; 4]; 4];
        for i in 0..n {
            for j in 0..h {
                let temp_j = j;
                l[i][temp_j] = b[0][temp_j];
            }
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    l = f(&p, &[[1i64, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]], d, d, d);
    println!("{:?}", l);
}