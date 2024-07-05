use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: vecdeque![7, 6, 5, 4, 3, 2, 1, 0],
    };

    k.c.reserve(20);
    println!();
    k.c.extend(&[0xAA]);
}