fn main() {
    fn f(_: &[i64]) -> [i64; 4] {
        [1, 0, 0, 0]
    }

    let l = [1, 0, 0, 0];
    let l = f(&l);
    println!("{:?}", l);
}