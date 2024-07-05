fn main() {
    const c: u64 = 1_000_000_000_000;
    const d: usize = 4;
    type e = [[i64; d]; d];

    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        for i in 0..n {
            for j in 0..h {
                for k in 0..g {
                    l[i][j] = b[k][j];
                }
            }
        }
        l
    }

    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let a = p;
    let m = d;
    let n = c;
    let mut l = e::default();
    for i in 0..m {
        for j in 0..m {
            for k in 0..m {
                l[i][j] = l[i][j] + a[i][k] * l[k][j];
            }
        }
    }
    let q = l;
    println!("{:?}", q);
}