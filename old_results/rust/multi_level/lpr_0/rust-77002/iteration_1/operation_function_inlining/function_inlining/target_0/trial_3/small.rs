fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let mut l_inline = [[0; 4]; 4];
    l_inline[0][0] = l[0][0];
    l = l_inline;
    println!("{:?}", l);
}