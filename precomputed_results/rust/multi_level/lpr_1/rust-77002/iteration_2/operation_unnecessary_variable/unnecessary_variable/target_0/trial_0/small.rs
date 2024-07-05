fn main() {
    fn f(a: &[i64], b: &[i64]) -> [i64; 4] {
        let mut result = [0; 4];
        result[0] = b[1];
        result
    }

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];

    let l = f(&[0, 1, 0, 0], &l);
    println!("{:?}", l);
}