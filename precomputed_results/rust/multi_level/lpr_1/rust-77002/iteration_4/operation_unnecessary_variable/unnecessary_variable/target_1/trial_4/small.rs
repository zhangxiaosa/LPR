fn main() {
    let mut l = [0, 1, 0, 0];
    let b = &l;
    l[0] = b[1];
    println!("{:?}", l);
}