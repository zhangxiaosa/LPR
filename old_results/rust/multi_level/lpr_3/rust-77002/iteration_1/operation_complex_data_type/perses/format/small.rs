fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }
    let mut l = [1, 0, 0, 0];
    let b = [[]];
    l = f(&b[0], &l, 4, 4);
    println!("{:?}", l);
}
