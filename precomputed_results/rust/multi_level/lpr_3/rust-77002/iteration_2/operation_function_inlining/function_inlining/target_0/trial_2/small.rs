fn main() {
    let mut l = [1, 0, 0, 0];
    for j in 0..4 {
        l[j] = l[j];
    }
    println!("{:?}", l);
}