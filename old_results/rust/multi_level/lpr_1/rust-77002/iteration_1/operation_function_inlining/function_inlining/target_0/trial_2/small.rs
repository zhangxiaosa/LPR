fn main() {
    const d: usize = 4;

    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];

    let mut l = [0; 4];
    for i in 0..d {
        for j in (0..d).step_by(2) {
            for k in 0..d {
                l[j] = l[j + 1];
            }
        }
    }

    println!("{:?}", l);
}