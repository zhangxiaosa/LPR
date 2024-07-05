fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        let n_unrolled = n / 2;
        
        let k = 2; // Number of elements to unroll

        let mut l_unrolled = [[0; d]; d];
        
        for i in 0..n_unrolled {
            for j in (0..h).step_by(k) {
                for k_idx in 0..k {
                    for k in 0..g {
                        let i_unrolled = i * k;
                        l_unrolled[i_unrolled + k_idx][j] = b[k][j];
                    }
                }
            }
        }

        for i in 0..d {
            for j in 0..d {
                l[i][j] = l_unrolled[i][j];
            }
        }

        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    println!("{:?}", l);
}