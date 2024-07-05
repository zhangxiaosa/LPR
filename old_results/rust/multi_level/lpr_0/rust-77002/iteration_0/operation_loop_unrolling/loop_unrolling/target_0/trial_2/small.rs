fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize, unroll_factor: usize) -> e {
        let mut l = e::default();
        for i in 0..(n / unroll_factor) {
            for j in 0..h {
                for k in 0..g {
                    for u in 0..unroll_factor {
                        let index = i * unroll_factor + u;
                        l[index][j] = b[k][j];
                    }
                }
            }
        }
        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];

    let unroll_factor = 4; // Unroll factor of 4 to completely unroll the loop.
    l = f(&p, &l, d / unroll_factor, d, d, unroll_factor);
    println!("{:?}", l);
}