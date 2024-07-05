fn main() {
    const d: usize = 4;
    type e = [[i64; d]; d];
    fn f(a: &e, b: &e, n: usize, g: usize, h: usize) -> e {
        let mut l = e::default();
        for i in (0..n) {
            for j in 0..h {
                let temp_j = j;
                let k = 0;
                l[i][temp_j] = b[k][temp_j];
            }
        }
        l
    }
    const p: e = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d, d);
    let q = l;
    println!("{:?}", q);
}
