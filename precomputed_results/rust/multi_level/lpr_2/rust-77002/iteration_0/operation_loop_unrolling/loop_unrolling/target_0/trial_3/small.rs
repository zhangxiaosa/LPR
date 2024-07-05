fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];
    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();

        // Loop unrolling manually for i in 0..n
        let i = 0;
        for j in 0..h {
            for k in 0..g {
                l[i][j] = b[k][j];
            }
        }
        let i = 1;
        for j in 0..h {
            for k in 0..g {
                l[i][j] = b[k][j];
            }
        }
        let i = 2;
        for j in 0..h {
            for k in 0..g {
                l[i][j] = b[k][j];
            }
        }
        let i = 3;
        for j in 0..h {
            for k in 0..g {
                l[i][j] = b[k][j];
            }
        }

        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}