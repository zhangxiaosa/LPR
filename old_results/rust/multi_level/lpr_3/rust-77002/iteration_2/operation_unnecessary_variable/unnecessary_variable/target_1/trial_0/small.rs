fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let mut l_inner = l[0]; // Copy propagation optimization
        [l_inner, 0, 0, 0]
    }
    let mut l = [1, 0, 0, 0];
    l = f(&l);
    println!("{:?}", l);
}