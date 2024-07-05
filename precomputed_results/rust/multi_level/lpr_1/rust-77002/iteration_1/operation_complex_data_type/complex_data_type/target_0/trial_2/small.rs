fn main() {
    const d: usize = 4;

    fn f(a: &[i64], b: &[i64], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l = [0; 4];
        for j in (0..h).step_by(2) {
            l[j] = b[1];
            l[j + 1] = b[1];
        }
        l
    }

    const p_0_0: i64 = 0;
    const p_0_1: i64 = 1;
    const p_0_2: i64 = 0;
    const p_0_3: i64 = 0;
    const p_1_0: i64 = 0;
    const p_1_1: i64 = 0;
    const p_1_2: i64 = 1;
    const p_1_3: i64 = 0;
    const p_2_0: i64 = 0;
    const p_2_1: i64 = 0;
    const p_2_2: i64 = 0;
    const p_2_3: i64 = 1;
    const p_3_0: i64 = 1;
    const p_3_1: i64 = 2;
    const p_3_2: i64 = 2;
    const p_3_3: i64 = 2;

    let mut l = [0, 1, 0, 0];
    l = f(&[p_0_0, p_0_1, p_0_2, p_0_3], &l, d, d, d);
    println!("{:?}", l);
}