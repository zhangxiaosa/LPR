fn main() {
    let mut l = [1, 0, 0, 0];
    let b = [[]];
    l = [b[0][0], l[1], l[2], l[3]];
    println!("{:?}", l);
}