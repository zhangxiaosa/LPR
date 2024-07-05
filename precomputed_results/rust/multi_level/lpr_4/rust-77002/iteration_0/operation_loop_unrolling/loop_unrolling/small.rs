fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();

        // Unrolled loop
        if n > 0 {
            // Unrolled iteration 1
            for j in 0..h {
                l[0][j] = b[0][j];
            }
            // Unrolled iteration 2
            for j in 0..h {
                l[1][j] = b[1][j];
            }
            // Unrolled iteration 3
            for j in 0..h {
                l[2][j] = b[2][j];
            }
            // Unrolled iteration 4
            for j in 0..h {
                l[3][j] = b[3][j];
            }
            // Continue unrolling for the remaining iterations of n
        }

        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    let q = l;
    println!("{:?}", q);
}
