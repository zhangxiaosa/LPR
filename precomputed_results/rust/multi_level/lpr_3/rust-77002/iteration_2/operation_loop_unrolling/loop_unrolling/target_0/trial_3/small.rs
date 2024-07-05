fn f(a: &[i64], l: &[i64], h: usize) -> [i64; 4] {
    let mut l_inner = [0i64; 4];
    l_inner[0] = l[0];
    l_inner[1] = l[1];
    l_inner[2] = l[2];
    l_inner[3] = l[3];
    l_inner
}

fn main() {
    let mut l = [1, 0, 0, 0];
    l = f(&l, &l, 4);
    println!("{:?}", l);
}