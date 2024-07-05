fn main() {
    let mut l: [i32; 4] = [0, 1, 0, 0];
    let b: &[i32; 4] = &l;
    let mut result: [i32; 4] = [0, 0, 0, 0];
    result[0] = b[1];
    l = result;
    println!("{:?}", l);
}
