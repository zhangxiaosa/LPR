fn main() {
    fn f(a: &[i64], b: &[i64], g: usize, h: usize) -> i64 {
        let mut l = 0i64;
        for j in 0..h {
            l = b[j];
        }
        l
    }

    const p: i64 = 0;
    let mut l: i64 = 1;
    let b = [&p, &l];
    l = f(&b.concat(), &l, 4, 4);
    println!("{:?}", l);
}