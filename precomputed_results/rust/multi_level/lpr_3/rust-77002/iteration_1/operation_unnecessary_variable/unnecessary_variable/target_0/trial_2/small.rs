fn main() {
    fn f(b: &[i64], h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }
    let l = [1, 0, 0, 0];
    let b = [[]];
    let l = f(&b[0], 4);
    println!("{:?}", l);
}