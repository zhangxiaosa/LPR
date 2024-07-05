fn main() {
    let mut l = [0, 1, 0, 0];
    let mut result = [0; 4];
    result[0] = l[1]; // Optimized line
    l = result;
    println!("{:?}", l);
}