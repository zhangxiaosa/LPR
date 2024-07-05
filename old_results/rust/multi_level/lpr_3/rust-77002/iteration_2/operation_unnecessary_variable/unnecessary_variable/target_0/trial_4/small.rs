fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = 1;
        l_inner
    }
    let l = f(&[1, 0, 0, 0]);
    println!("{:?}", l);
}