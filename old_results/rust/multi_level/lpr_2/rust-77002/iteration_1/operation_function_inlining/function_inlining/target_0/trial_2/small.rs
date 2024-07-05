fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let mut l_inline = [[0; 4]; 4];
    for i in 0..2 {
        for j in 0..2 {
            l_inline[i][j] = l[2][2];
        }
    }
    l = l_inline;
    println!("{:?}", l);
}