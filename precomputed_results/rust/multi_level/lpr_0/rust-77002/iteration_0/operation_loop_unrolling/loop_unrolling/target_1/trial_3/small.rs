fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, g: usize, h: usize) -> e {
        let mut l = e::default();
        let i = 0;

        l[i][0] = b[0][0];
        l[i][1] = b[0][1];
        l[i][2] = b[0][2];
        l[i][3] = b[0][3];

        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d);
    println!("{:?}", l);
}