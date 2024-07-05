fn main() {
    let mut l = [[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]];
    let mut result = [[0; 4]; 4];
    result[0] = l[0];
    l = result;
    println!("{:?}", l);
}