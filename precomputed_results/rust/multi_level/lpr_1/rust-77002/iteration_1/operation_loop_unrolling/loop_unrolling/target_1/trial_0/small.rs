fn main() {
    const d: usize = 4;

    fn f(a: &[i64], b: &[i64], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l = [0; 4];

        for j in (0..h).step_by(2).take(4).min(n - 1) {
            l[j] = b[1];

            if j + 1 < n {
                l[j + 1] = b[1];
            }
        }

        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [0, 1, 0, 0];
    l = f(&p[0], &l, d, d, d);
    println!("{:?}", l);
}