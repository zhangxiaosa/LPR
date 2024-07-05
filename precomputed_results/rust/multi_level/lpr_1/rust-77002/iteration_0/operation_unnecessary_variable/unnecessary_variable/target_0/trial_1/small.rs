fn main() {
    const d: usize = 4;

    fn f(b: &[i64; 4]) -> [i64; 4] {
        let mut l = [0; 4];
        for _ in 0..d {
            for j in (0..d).step_by(2) {
                for _ in 0..d {
                    l[j] = b[j + 1];
                }
            }
        }
        l
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&l);
    println!("{:?}", l);
}