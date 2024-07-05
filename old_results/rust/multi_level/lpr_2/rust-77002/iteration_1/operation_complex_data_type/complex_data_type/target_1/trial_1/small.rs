fn main() {
    fn f(b0: i64, b1: i64, b2: i64, b3: i64, b4: i64, b5: i64, b6: i64, b7: i64, b8: i64, b9: i64, b10: i64, b11: i64, b12: i64, b13: i64, b14: i64, b15: i64) -> [i64; 4] {
        let mut l = [0; 4];
        let i = 0;
        l[i] = b10;
        l
    }
    let mut l0 = 1;
    let mut l1 = 0;
    let mut l2 = 0;
    let mut l3 = 0;
    let mut l4 = 0;
    let mut l5 = 1;
    let mut l6 = 0;
    let mut l7 = 0;
    let mut l8 = 0;
    let mut l9 = 0;
    let mut l10 = 1;
    let mut l11 = 0;
    let mut l12 = 0;
    let mut l13 = 0;
    let mut l14 = 0;
    let mut l15 = 1;
    let mut temp = f(l0, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15);
    l0 = temp[0];
    l1 = temp[1];
    l2 = temp[2];
    l3 = temp[3];
    println!("{:?}", [l0, l1, l2, l3]);
}