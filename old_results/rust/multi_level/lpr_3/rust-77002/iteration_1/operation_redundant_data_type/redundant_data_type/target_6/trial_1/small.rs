fn main() -> [i64; 4] {
    fn f(a: [i64; 4], b: [i64; 4], n: usize, g: usize, h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j as usize];
        }
        l
    }

    const p: [i64; 16] = [0; 16];
    let mut l: [i64; 4] = [1, 0, 0, 0];
    let b = [p[0]; 4];
    l = f(b, l, 4, 4, 4);
    l
}