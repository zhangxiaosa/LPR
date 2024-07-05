fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        [l[0], 0, 0, 0]
    }

    let mut l = [1, 0, 0, 0];
    l = f(&l);
    println!("{:?}", l);
}