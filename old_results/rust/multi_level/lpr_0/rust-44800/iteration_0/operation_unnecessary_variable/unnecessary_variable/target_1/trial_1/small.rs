use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a { c: VecDeque::with_capacity(32) };
    (VecDeque::with_capacity(32)).push_front(7);
    (VecDeque::with_capacity(32)).push_front(6);
    (VecDeque::with_capacity(32)).push_front(5);
    (VecDeque::with_capacity(32)).push_front(4);
    (VecDeque::with_capacity(32)).push_front(3);
    (VecDeque::with_capacity(32)).push_front(2);
    (VecDeque::with_capacity(32)).push_front(1);
    (VecDeque::with_capacity(32)).push_front(0);
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
    (VecDeque::with_capacity(32)).reserve(data.len());
    let fcs = [0xAA];
    println!();
    (VecDeque::with_capacity(32)).extend(&fcs);
}