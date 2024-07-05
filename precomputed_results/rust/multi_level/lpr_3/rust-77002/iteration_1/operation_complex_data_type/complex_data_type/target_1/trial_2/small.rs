fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }
    const p0: i64 = 0;
    const p1: i64 = 1;
    const p2: i64 = 0;
    const p3: i64 = 0;
    const p4: i64 = 0;
    const p5: i64 = 0;
    const p6: i64 = 1;
    const p7: i64 = 0;
    const p8: i64 = 0;
    const p9: i64 = 0;
    const p10: i64 = 0;
    const p11: i64 = 1;
    const p12: i64 = 1;
    const p13: i64 = 2;
    const p14: i64 = 2;
    const p15: i64 = 2;
    const p: [i64; 16] = [p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15];
    let mut l0: i64 = 1;
    let mut l1: i64 = 0;
    let mut l2: i64 = 0;
    let mut l3: i64 = 0;
    let b0: i64 = p0;
    let b1: i64 = p1;
    let b2: i64 = p2;
    let b3: i64 = p3;
    let b4: i64 = p4;
    let b5: i64 = p5;
    let b6: i64 = p6;
    let b7: i64 = p7;
    let b8: i64 = p8;
    let b9: i64 = p9;
    let b10: i64 = p10;
    let b11: i64 = p11;
    let b12: i64 = p12;
    let b13: i64 = p13;
    let b14: i64 = p14;
    let b15: i64 = p15;
    let b0_arr: [i64; 1] = [b0];
    let b1_arr: [i64; 1] = [b1];
    let b2_arr: [i64; 1] = [b2];
    let b3_arr: [i64; 1] = [b3];
    let b4_arr: [i64; 1] = [b4];
    let b5_arr: [i64; 1] = [b5];
    let b6_arr: [i64; 1] = [b6];
    let b7_arr: [i64; 1] = [b7];
    let b8_arr: [i64; 1] = [b8];
    let b9_arr: [i64; 1] = [b9];
    let b10_arr: [i64; 1] = [b10];
    let b11_arr: [i64; 1] = [b11];
    let b12_arr: [i64; 1] = [b12];
    let b13_arr: [i64; 1] = [b13];
    let b14_arr: [i64; 1] = [b14];
    let b15_arr: [i64; 1] = [b15];
    let b0_merged_arr = [&b0_arr, &b1_arr, &b2_arr, &b3_arr, &b4_arr, &b5_arr, &b6_arr, &b7_arr, &b8_arr, &b9_arr, &b10_arr, &b11_arr, &b12_arr, &b13_arr, &b14_arr, &b15_arr].concat();
    let b_merged_arr = [&b0_merged_arr[..]];
    l0 = f(&b_merged_arr[..], &[l0, l1, l2, l3], 4, 4)[0];
    l1 = f(&b_merged_arr[..], &[l0, l1, l2, l3], 4, 4)[1];
    l2 = f(&b_merged_arr[..], &[l0, l1, l2, l3], 4, 4)[2];
    l3 = f(&b_merged_arr[..], &[l0, l1, l2, l3], 4, 4)[3];
    println!("{:?}", [l0, l1, l2, l3]);
}