fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }

    const p: [i64; 16] = [0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2];
    let mut l = [1, 0, 0, 0];
    let b_0 = p[0];
    let b_1 = p[1];
    // ...
    let b_15 = p[15];
    let b = [b_0, b_1, ..., b_15];
    l = f(&b.concat(), &l, 4, 4);
    println!("{:?}", l);
}