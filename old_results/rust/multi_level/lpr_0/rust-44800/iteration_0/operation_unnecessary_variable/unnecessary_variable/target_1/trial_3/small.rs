use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a { c: VecDeque::with_capacity(32) };
    k.c.push_front(7);
    k.c.push_front(6);
    k.c.push_front(5);
    k.c.push_front(4);
    k.c.push_front(3);
    k.c.push_front(2);
    k.c.push_front(1);
    k.c.push_front(0);
    let mut data = Vec::with_capacity(30);
    let hw = 0b1000_10_00;
    data.push(hw);
    data.push(hw);
    data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    data.push(55);
    data.push(55);
    data.push(hw);
    data.push(hw);
    let fcs = [0xAA];
    println!();
    k.c.extend(&fcs);
}