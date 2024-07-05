fn main() {
    const d: usize = 4;

    fn f(a: &[i64; 4], b: &[i64; 4], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l = [0; 4];
        for i in 0..n {
            let mut j = 0;
            while j < h {
                l[j] = b[j + 1];
                l[j + 2] = b[j + 1];
                j += 2;
            }
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p[0], &l, d, d, d);
    println!("{:?}", l);
}