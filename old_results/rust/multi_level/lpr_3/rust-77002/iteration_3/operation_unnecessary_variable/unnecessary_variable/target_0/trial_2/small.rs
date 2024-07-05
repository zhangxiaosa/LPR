fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = l[0];
        l_inner
    }

    let l_1 = 0;
    let l_2 = 0;
    let l_3 = 0;
    let mut l = [1, l_1, l_2, l_3];
    l = f(&l);
    println!("{:?}", l);
}