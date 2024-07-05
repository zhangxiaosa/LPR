fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let mut l = [[0; 4]; 4];
    for i in 0..2 {
        for j in 0..2 {
            l[i][j] = l[2][2];
        }
    }
    println!("{:?}", l);
}