fn main() {
    const d: usize = 4;

    fn f(a: &[i64], b: &[i64], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l2 = [0; 4];
        for j in (0..h).step_by(2) {
            l2[j] = b[1];
            l2[j + 1] = b[1];
        }
        l2
    }

    let mut l1 = [0, 1, 0, 0];
    let l2 = f(&[0, 1, 0, 0], &l1, d, d, d);
    println!("{:?}", l2);
}