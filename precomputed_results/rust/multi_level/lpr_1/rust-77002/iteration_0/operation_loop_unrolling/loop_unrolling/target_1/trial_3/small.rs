fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();

        for i in 0..n {
            for k in 0..g {
                l[i][0] = b[k][0];
                l[i][1] = b[k][1];
                l[i][2] = b[k][2];
                l[i][3] = b[k][3];
            }
        }

        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];

    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);

    println!("{:?}", l);
}