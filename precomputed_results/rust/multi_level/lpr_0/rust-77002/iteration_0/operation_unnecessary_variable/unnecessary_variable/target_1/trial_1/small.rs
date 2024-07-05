fn main() {
    const D: usize = 4;

    fn f(b: &[[i64; D]]) -> [[i64; D]; D] {
        let mut l = [[0; D]; D];
        let i = 0;
        l[i][0] = b[0][0];
        l
    }

    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    l = f(&l);
    println!("{:?}", l);
}