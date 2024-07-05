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
    let b0 = 1;
    let b1 = 0;
    let b2 = 0;
    let b3 = 0;
    let b4 = 0;
    let b5 = 1;
    let b6 = 0;
    let b7 = 0;
    let b8 = 0;
    let b9 = 0;
    let b10 = 1;
    let b11 = 0;
    let b12 = 0;
    let b13 = 0;
    let b14 = 0;
    let b15 = 1;

    let l = f(b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15);

    println!("{:?}", l);
}