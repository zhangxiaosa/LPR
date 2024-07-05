fn main() {
    fn f(l: [i64; 4]) -> [i64; 4] {
        let mut l_inner: [i64; 4] = [0, 0, 0, 0];
        l_inner[0] = l[0];
        l_inner
    }
    let mut l: [i64; 4] = [1, 0, 0, 0];
    l = f(l);
    println!("{:?}", l);
}