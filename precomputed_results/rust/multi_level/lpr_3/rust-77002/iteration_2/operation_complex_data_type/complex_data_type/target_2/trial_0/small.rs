fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        let mut l_inner_0: i64 = 0;
        let mut l_inner_1: i64 = 0;
        let mut l_inner_2: i64 = 0;
        let mut l_inner_3: i64 = 0;

        l_inner_0 = l[0];

        [l_inner_0, l_inner_1, l_inner_2, l_inner_3]
    }

    let mut l_0: i64 = 1;
    let mut l_1: i64 = 0;
    let mut l_2: i64 = 0;
    let mut l_3: i64 = 0;

    l_0 = f(&[l_0, l_1, l_2, l_3], &[l_0, l_1, l_2, l_3], 4)[0];

    println!("{:?}", [l_0, l_1, l_2, l_3]);
}