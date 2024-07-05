fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        let mut l_temp = e::default();

        for _ in 0..4 {
            let i = 0;
            let j = 0;
            let k = 0;
            l_temp[i][j] = b[k][j];

            let i = 1;
            l_temp[i][j] = b[k][j];

            let i = 2;
            l_temp[i][j] = b[k][j];

            let i = 3;
            l_temp[i][j] = b[k][j];
        }

        l = l_temp;
        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);

    println!("{:?}", l);
}