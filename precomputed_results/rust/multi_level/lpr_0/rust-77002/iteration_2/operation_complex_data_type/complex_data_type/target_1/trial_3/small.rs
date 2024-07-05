fn main() {
    fn f(b0: i64, b1: i64, b2: i64, b3: i64, b4: i64, b5: i64, b6: i64, b7: i64, b8: i64, b9: i64, b10: i64, b11: i64, b12: i64, b13: i64, b14: i64, b15: i64) -> [i64; 16] {
        let mut l = [0; 16];
        l[0] = b0;
        l[1] = b1;
        l[2] = b2;
        l[3] = b3;
        l[4] = b4;
        l[5] = b5;
        l[6] = b6;
        l[7] = b7;
        l[8] = b8;
        l[9] = b9;
        l[10] = b10;
        l[11] = b11;
        l[12] = b12;
        l[13] = b13;
        l[14] = b14;
        l[15] = b15;
        l
    }

    let mut l0: i64 = 1;
    let mut l1: i64 = 0;
    let mut l2: i64 = 0;
    let mut l3: i64 = 0;
    let mut l4: i64 = 0;
    let mut l5: i64 = 1;
    let mut l6: i64 = 0;
    let mut l7: i64 = 0;
    let mut l8: i64 = 0;
    let mut l9: i64 = 0;
    let mut l10: i64 = 1;
    let mut l11: i64 = 0;
    let mut l12: i64 = 0;
    let mut l13: i64 = 0;
    let mut l14: i64 = 1;
    let mut l15: i64 = 0;
    let mut l: [i64; 16] = f(l0, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15);
    println!("{:?}", l);
}