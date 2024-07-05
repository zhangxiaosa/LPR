fn main() {
    const p: [[i64; 4]; 4] = [[0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1], [1, 2, 2, 2]];
    let mut l = [0, 1, 0, 0];
    {
        let mut result = [0; 4];
        result[0] = l[1];
        l = result;
    }
    println!("{:?}", l);
}
