fn main() {
    const d: usize = 4;
    
    fn f(a: &[&[i64; 4]; 4], b: &[&[i64; 4]; 4], n: usize, g: usize, h: usize) -> [&[i64; 4]; 4] {
        let mut l = [&[0i64; 4]; 4];
        for i in 0..n {
            for j in 0..h {
                let temp_j = j;
                let k = 0;
                l[i][temp_j] = b[k][temp_j];
            }
        }
        l
    }
    
    const p: [&[i64; 4]; 4] = [
        &[0, 1, 0, 0],
        &[0, 0, 1, 0],
        &[0, 0, 0, 1],
        &[1, 2, 2, 2],
    ];
    
    let mut l: [&[i64; 4]; 4] = [
        &[1, 0, 0, 0],
        &[0, 1, 0, 0],
        &[0, 0, 1, 0],
        &[0, 0, 0, 1],
    ];
    
    l = f(&p, &l, d, d, d);

    let q: [&[i64; 4]; 4] = l;

    println!("{:?}", q);
}