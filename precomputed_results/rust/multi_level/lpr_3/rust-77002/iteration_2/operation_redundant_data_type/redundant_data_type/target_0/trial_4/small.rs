fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> i64 {
        let mut l_inner = 0i64;
        l_inner = l[0];
        l_inner
    }
    let mut l = 1i64;
    l = f(&[l], &[l], 4);
    println!("{:?}", l);
}