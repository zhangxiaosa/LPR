fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        l
    }

    let mut l = [1, 0, 0, 0];
    l = f(&l, &l, 4);
    println!("{:?}", l);
}