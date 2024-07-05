fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        let mut l_inner = [0_i64, 0_i64, 0_i64, 0_i64];
        l_inner[0] = l[0];
        l_inner
    }
    let mut l = [1_i64, 0_i64, 0_i64, 0_i64];
    l = f(&l, &l, 4_usize);
    println!("{:?}", l);
}