fn main() {
    fn f(b: &[[i64; 4]]) -> [i64; 4] {
        let mut l = [0; 4];
        l[0] = b[2][2];
        l
    }
    let mut l = [1, 0, 0, 0];
    l = f(&l)[0];
    println!("{:?}", l);
}