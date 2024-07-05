use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn push_front(c: &mut Vec<u8>, value: u8) {
    c.insert(0, value);
}

fn main() {
    let mut c = Vec::with_capacity(32);
    push_front(&mut c, 7);
    push_front(&mut c, 6);
    push_front(&mut c, 5);
    push_front(&mut c, 4);
    push_front(&mut c, 3);
    push_front(&mut c, 2);
    push_front(&mut c, 1);
    push_front(&mut c, 0);
    
    let mut k = a { c: VecDeque::new() };
    for value in &c {
        k.c.push_back(*value);
    }
    
    let mut data = Vec::with_capacity(30);
    let hw = 0b1000_10_00;
    data.push(hw);
    data.push(hw);
    let addr = [1, 2, 3, 4, 5, 6];
    data.extend_from_slice(&addr);
    data.extend_from_slice(&addr);
    data.extend_from_slice(&addr);
    data.push(55);
    data.push(55);
    data.push(hw);
    data.push(hw);
    
    k.c.reserve_exact(data.len());
    
    let fcs = [0xAA];
    for value in &fcs {
        k.c.push_back(*value);
    }
    
    println!();
}