fn main() {
    fn f(_: &[i64], _: &[i64], _: usize, _: usize) -> [i64; 4] {
        [0i64; 4]
    }

    let mut l = [1, 0, 0, 0];
    l = [1, 0, 0, 0];
    println!("{:?}", l);
}