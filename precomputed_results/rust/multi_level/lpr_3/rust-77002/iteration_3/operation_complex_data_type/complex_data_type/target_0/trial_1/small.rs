fn main() {
    fn f(l0: i64, l1: i64, l2: i64, l3: i64) -> [i64; 4] {
        let mut l_inner = [0, 0, 0, 0];
        l_inner[0] = l0;
        l_inner[1] = l1;
        l_inner[2] = l2;
        l_inner[3] = l3;
        l_inner
    }

    let l0 = 1;
    let l1 = 0;
    let l2 = 0;
    let l3 = 0;
    let l = f(l0, l1, l2, l3);
    println!("{:?}", l);
}