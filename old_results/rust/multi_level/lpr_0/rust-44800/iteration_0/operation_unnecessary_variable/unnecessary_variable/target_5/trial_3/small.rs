use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    VecDeque::new();
    let mut data = Vec::with_capacity(20);
    data.push(0b1000_10_00);
    data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    data.push(55);
    data.push(0b1000_10_00);
    println!();
    data.extend(&[0xAA]);
}