fn main() {
    let mut l = [1, 0, 0, 0];
    let mut l_inner = [0, 0, 0, 0];
    l_inner[0] = l[0];
    l = l_inner;
    println!("{:?}", l);
}
