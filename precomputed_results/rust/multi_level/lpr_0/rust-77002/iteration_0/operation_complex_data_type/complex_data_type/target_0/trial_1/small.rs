fn main() {
    const d: usize = 4;
    
    fn f(a: &[[i64; 4]], b: &[[i64; 4]], g: usize, h: usize) -> [[i64; 4]; 4] {
        let mut l = [[0; 4]; 4];
        let i: usize = 0;
        l[i][0] = b[0][0];
        l
    }
    
    const p: [[i64; d]; d] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&p, &l, d, d);
    println!("{:?}", l);
}