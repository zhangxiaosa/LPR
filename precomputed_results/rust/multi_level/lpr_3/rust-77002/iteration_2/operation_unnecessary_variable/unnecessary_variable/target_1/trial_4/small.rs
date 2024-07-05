fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let l_inner_0 = l[0];
        [l_inner_0, 0, 0, 0]
    }
    let l = f(&[1, 0, 0, 0]);
    println!("{:?}", l);
}