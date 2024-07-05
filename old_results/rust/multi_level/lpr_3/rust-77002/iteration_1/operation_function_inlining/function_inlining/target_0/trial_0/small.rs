fn main() {
    const d: usize = 4;
    let mut l: [[i64; d]; d];
    for i in 0..d {
        for j in 0..d {
            l[i][j] = 0;
        }
    }
    println!("{:?}", l);
}
