fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();

        // Loop unrolling begins
        // Iteration 1
        for j in 0..h {
            for k in 0..g {
                l[0][j] = b[k][j];
            }
        }

        // Iteration 2
        for j in 0..h {
            for k in 0..g {
                l[1][j] = b[k][j];
            }
        }

        // Iteration 3
        for j in 0..h {
            for k in 0..g {
                l[2][j] = b[k][j];
            }
        }

        // Iteration 4
        for j in 0..h {
            for k in 0..g {
                l[3][j] = b[k][j];
            }
        }
        // Loop unrolling ends

        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    let q = l;
    println!("{:?}", q);
}