use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let k = a { c: VecDeque::from(vec![0, 1, 2, 3, 4, 5, 6, 7]) };
    k.c.reserve(20);
    println!();
    k.c.extend(&[0xAA]);
}
