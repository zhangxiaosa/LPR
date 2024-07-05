fn main() {
    fn f(_a: &[i64], mut l: [i64; 4], _g: usize, h: usize) -> [i64; 4] {
        for j in 0..h {
            l[j] = 0;
        }
        l
    }
    let mut l = [1, 0, 0, 0];
    l = f(&[], &l, 4, 4);
    println!("{:?}", l);
}