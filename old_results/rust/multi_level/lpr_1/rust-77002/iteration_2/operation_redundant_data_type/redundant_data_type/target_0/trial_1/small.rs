fn main() {
    const d: usize = 4;
    fn f(a: &[i64], b: &[i64], _n: usize, _g: usize, _h: usize) -> [i64; 4] {
        let mut l = [0; 4];
        l[0] = b[1];
        l
    }
    const p: [i64; 4] = [i64; 4] = [0, 1, 0, 0];
    let mut l = [i64; 4] = [0, 1, 0, 0];
    l = f(&p[0], &[i64; 4] = [0, 1, 0, 0], usize = 4, usize = 4, usize = 4);
    println!("{:?}", l);
}