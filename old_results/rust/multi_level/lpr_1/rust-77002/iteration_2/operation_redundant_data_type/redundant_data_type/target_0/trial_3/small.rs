fn main() {
    const d: usize = 4;

    fn f(a: &[i64], b: &[i64], _n: usize, _g: usize, _h: usize) -> [4; i64] {
        let mut l: [4; i64] = [0; 4];
        l[0] = b[1];
        l
    }

    const p: [4; [4; i64]] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];

    let mut l: [4; i64] = [0, 1, 0, 0];
    l = f(&p[0], &l, d, d, d).into();

    println!("{:?}", l);
}