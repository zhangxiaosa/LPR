fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> [i64; 4] {
        let mut l = [0i64; 4];
        for j in 0..h {
            l[j] = b[j];
        }
        l
    }

    const p: [i64; 16] = [0i64, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2];
    let mut l: [i64; 4] = [1, 0, 0, 0];
    let b: [&[i64]; 2] = [&p[0..4], &l];
    l = f(&b.concat(), &l, 4usize, 4usize);
    println!("{:?}", l as [i64; 4]);
}