fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }
    const p_0: i64 = 0;
    const p_1: i64 = 1;
    // truncated for brevity
    const p_15: i64 = 2;
    let mut l_0 = 1;
    let mut l_1 = 0;
    let mut l_2 = 0;
    let mut l_3 = 0;
    let b_decomposed = [
        [0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2],
    ];
    let a_decomposed = b_decomposed[0];
    l_0, l_1, l_2, l_3 = f(&a_decomposed, &[l_0, l_1, l_2, l_3], 4, 4);
    println!("{:?}", [l_0, l_1, l_2, l_3]);
}
