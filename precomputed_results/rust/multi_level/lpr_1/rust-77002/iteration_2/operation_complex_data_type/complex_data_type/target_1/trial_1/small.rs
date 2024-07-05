fn main() {
    fn f(a: &[i64], b: &[i64], _n: i64, _g: i64, _h: i64) -> [i64; 4] {
        let mut result = [0; 4];
        result[0] = b[1];
        result
    }

    const p0: [i64; 4] = [0, 1, 0, 0];
    const p1: [i64; 4] = [0, 0, 1, 0];
    const p2: [i64; 4] = [0, 0, 0, 1];
    const p3: [i64; 4] = [1, 2, 2, 2];
    const p: [[i64; 4]; 4] = [p0, p1, p2, p3];

    let mut l = [0, 1, 0, 0];
    l = f(&p[0], &l, 4, 4, 4);

    println!("{:?}", l);
}