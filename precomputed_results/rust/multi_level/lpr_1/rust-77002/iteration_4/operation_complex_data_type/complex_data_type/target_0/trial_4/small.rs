fn main() {
    let mut l = [0, 1, 0, 0];
    let b0 = l[0];
    let mut result = [0; 4];
    result[0] = b0;
    l = result;
    println!("{:?}", l);
}