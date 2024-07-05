fn main() {
    fn f<T>(a: &[&[[T; 4]]], b: &[&[[T; 4]]], n: usize, g: usize, h: usize) -> [[T; 4]; 4] {
        let mut l = [[0; 4]; 4];
        for j in 0..h {
            l[0][j] = b[0][j] as T;
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let d = 4;
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&[&p], &[&l], d as usize, d as usize, d as usize);
    println!("{:?}", l);
}