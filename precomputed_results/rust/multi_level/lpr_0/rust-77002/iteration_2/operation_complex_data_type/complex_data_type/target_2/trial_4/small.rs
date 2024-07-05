fn main() {
    fn f(b: &[i64; 16]) -> [i64; 16] {
        let mut l = [0; 16];
        l[0] = b[0];
        l
    }

    let mut l_0: i64 = 1;
    let mut l_1: i64 = 0;
    let mut l_2: i64 = 0;
    let mut l_3: i64 = 0;
    let mut l_4: i64 = 0;
    let mut l_5: i64 = 1;
    let mut l_6: i64 = 0;
    let mut l_7: i64 = 0;
    let mut l_8: i64 = 0;
    let mut l_9: i64 = 0;
    let mut l_10: i64 = 1;
    let mut l_11: i64 = 0;
    let mut l_12: i64 = 0;
    let mut l_13: i64 = 0;
    let mut l_14: i64 = 0;
    let mut l_15: i64 = 1;

    let mut l: [i64; 16] = [
        l_0, l_1, l_2, l_3, l_4, l_5, l_6, l_7, l_8, l_9, l_10, l_11, l_12, l_13, l_14, l_15,
    ];

    l = f(&l);
    println!("{:?}", l);
}