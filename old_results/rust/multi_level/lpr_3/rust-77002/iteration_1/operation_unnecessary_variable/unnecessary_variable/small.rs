fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        let mut l_inner = [0i64; 4];
        for j in 0..h {
            l_inner[j] = l[j];
        }
        l_inner
    }

    let mut l = [1, 0, 0, 0];
    l = f(&l, &l, 4);
    println!("{:?}", l);
}
