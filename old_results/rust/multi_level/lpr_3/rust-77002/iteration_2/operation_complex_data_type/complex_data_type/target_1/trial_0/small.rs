fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        let mut l_inner_0: i64 = 0;
        l_inner_0 = l[0];
        [l_inner_0, 0, 0, 0]
    }
    let mut l_0: i64 = 1;
    l_0 = f(&[l_0, 0, 0, 0], &[l_0, 0, 0, 0], 4)[0];
    println!("{:?}", [l_0, 0, 0, 0]);
}