fn main() {
    fn f(a: &[T], b: &[T], n: usize, g: usize, h: usize) -> [T; 4] {
        let mut l = [0; 4];
        for j in 0..h {
            l[j] = *b[j];
        }
        l
    }

    const p: [T; 16] = [0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2];
    let mut l = [1, 0, 0, 0];
    let b = [&p[0..4], &l];
    l = f(&b.concat(), &l, 4, 4, 4).into();
    println!("{:?}", l);
}