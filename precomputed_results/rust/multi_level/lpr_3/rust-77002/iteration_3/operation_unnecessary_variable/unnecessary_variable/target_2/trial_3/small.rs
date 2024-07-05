fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = 1;
        l_inner
    }

    let l_3 = 0;
    let mut l = [1, 0, 0, l_3];
    l = f(&l);
    println!("{:?}", l);
}