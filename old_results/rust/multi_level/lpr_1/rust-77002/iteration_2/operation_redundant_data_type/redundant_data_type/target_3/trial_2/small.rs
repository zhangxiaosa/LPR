fn main() {
    const d: i64 = 4;
    fn f(a: &[i64], b: &[i64], _n: i64, _g: i64, _h: i64) -> [i64; 4] {
        let mut l = [0i64; 4];
        l[0] = b[1] as i64;
        l
    }
    const p: [[i64; 4]; 4] = [
        [0i64, 1, 0, 0],
        [0, 0, 1, 0],
        [0, 0, 0, 1],
        [1, 2, 2, 2]
    ];
    let mut l = [0i64, 1, 0, 0];
    l = f(&p[0], &l, d, d, d);
    println!("{:?}", l);
}