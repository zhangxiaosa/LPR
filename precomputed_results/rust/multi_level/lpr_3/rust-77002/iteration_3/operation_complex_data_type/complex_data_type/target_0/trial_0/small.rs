fn main() {
    fn f(l: i64) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = l;
        l_inner
    }
    let mut l0 = 1;
    let mut l1 = 0;
    let mut l2 = 0;
    let mut l3 = 0;
    let f_result = f(l0);
    l0 = f_result[0];
    l1 = f_result[1];
    l2 = f_result[2];
    l3 = f_result[3];
    println!("{:?}", [l0, l1, l2, l3]);
}