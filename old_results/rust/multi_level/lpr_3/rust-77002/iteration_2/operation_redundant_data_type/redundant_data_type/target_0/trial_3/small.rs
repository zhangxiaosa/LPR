fn main() {
    fn f(a: [i64; 4], l: [i64; 4], h: usize) -> [i64; 4] {
        let mut l_inner = [0i64; 4];
        l_inner[0] = l[0];
        l_inner
    }
    let mut l = [1, 0, 0, 0];
    l = f(l, l, 4);
    println!("{:?}", l);
}
