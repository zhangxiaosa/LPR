use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let c: VecDeque<u8> = VecDeque::with_capacity(32);
    let mut k: a = a { c };
    k.c.push_front(7);
    k.c.push_front(6);
    k.c.push_front(5);
    k.c.push_front(4);
    k.c.push_front(3);
    k.c.push_front(2);
    k.c.push_front(1);
    k.c.push_front(0);
    let mut data: Vec<u8> = Vec::with_capacity(30);
    let hw: u8 = 0b1000_10_00;
    data.push(hw);
    data.push(hw);
    let addr: [u8; 6] = [1, 2, 3, 4, 5, 6];
    data.extend_from_slice(&addr);
    data.extend_from_slice(&addr);
    data.extend_from_slice(&addr);
    data.push(55);
    data.push(55);
    data.push(hw);
    data.push(hw);
    k.c.reserve(data.len());
    let fcs: [u8; 1] = [0xAA];
    println!();
    k.c.extend(&fcs);
}