fn main() {
    fn f(b: &[i64; 16]) -> [i64; 16] {
        let mut l = [0; 16];
        l[0] = b[0];
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
    let mut l14: i64 = 0;
    let mut l15: i64 = 1;

    let l = [l0, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15];
    let l = f(&l);
    println!("{:?}", l);
}