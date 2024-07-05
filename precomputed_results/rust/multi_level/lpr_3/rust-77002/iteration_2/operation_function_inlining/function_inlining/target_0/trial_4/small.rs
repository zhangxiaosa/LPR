fn main() {
    let mut l = [1, 0, 0, 0];
    let mut l_inner = [0i64; 4];
    for j in 0..4 {
        l_inner[j] = l[j];
    }
    l = l_inner;
    println!("{:?}", l);
}