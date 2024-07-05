fn main() {
    fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
        let mut l_inner_0 = 0;
        let mut l_inner_1 = 0;
        let mut l_inner_2 = 0;
        let mut l_inner_3 = 0;

        l_inner_0 = l[0];

        [l_inner_0, l_inner_1, l_inner_2, l_inner_3]
    }

    let mut l_0 = 1;
    let mut l_1 = 0;
    let mut l_2 = 0;
    let mut l_3 = 0;

    let l_inner_result = f(&[l_0, l_1, l_2, l_3], &[l_0, l_1, l_2, l_3], 4);
    l_0 = l_inner_result[0];
    l_1 = l_inner_result[1];
    l_2 = l_inner_result[2];
    l_3 = l_inner_result[3];

    println!("{:?}", [l_0, l_1, l_2, l_3]);
}