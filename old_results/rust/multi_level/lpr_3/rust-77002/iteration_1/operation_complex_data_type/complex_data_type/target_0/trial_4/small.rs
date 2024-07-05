fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> [i64; 4] {
        let mut l0 = 0i64;
        let mut l1 = 0i64;
        let mut l2 = 0i64;
        let mut l3 = 0i64;
        let mut l = [l0, l1, l2, l3];
        
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }
    
    let mut l0 = 1i64;
    let mut l1 = 0i64;
    let mut l2 = 0i64;
    let mut l3 = 0i64;
    let mut l = [l0, l1, l2, l3];
    
    let p0 = 0i64;
    let p1 = 1i64;
    let p2 = 0i64;
    let p3 = 0i64;
    let p4 = 0i64;
    let p5 = 0i64;
    let p6 = 1i64;
    let p7 = 0i64;
    let p8 = 0i64;
    let p9 = 0i64;
    let p10 = 0i64;
    let p11 = 1i64;
    let p12 = 1i64;
    let p13 = 2i64;
    let p14 = 2i64;
    let p15 = 2i64;
    
    let b = [&[p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15]];
    
    l = f(&b.concat(), &l, 4, 4);
    println!("{:?}", [l0, l1, l2, l3]);
}