fn main() {
    const d: usize = 4;

    fn f(a: &[[i64; d]], b: &[[i64; d]], g: usize, h: usize) -> [[i64; d]; d] {
        let mut l = [[0; d]; d];
        l
    }

    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&l, &l, d, d);
    println!("{:?}", l);
}