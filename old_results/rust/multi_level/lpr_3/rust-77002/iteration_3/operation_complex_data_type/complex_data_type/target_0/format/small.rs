fn main() {
    fn f(l: &[i64]) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = l[0];
        l_inner
    }

    let l_0: i64 = 1;
    let l_1: i64 = 0;
    let l_2: i64 = 0;
    let l_3: i64 = 0;
    let mut l = [l_0, l_1, l_2, l_3];
    l = f(&l);
    println!("{:?}", l);
}
