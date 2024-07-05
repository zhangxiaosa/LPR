use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a { c: vec![7, 6, 5, 4, 3, 2, 1, 0].into_iter().collect() };
    k.c.reserve(20);
    println!();
    k.c.extend(&[0xAA]);
}