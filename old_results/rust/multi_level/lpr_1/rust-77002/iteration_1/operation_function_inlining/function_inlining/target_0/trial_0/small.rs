fn main() {
    const d: usize = 4;
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    for i in 0..d {
        for j in (0..d).step_by(2) {
            for k in 0..d {
                l[j] = l[j + 1];
            }
        }
    }
    println!("{:?}", l);
}