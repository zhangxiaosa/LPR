use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let c = VecDeque::<u8>::with_capacity(32);
    let mut k = a { c };
    k.c.push_front(7_u8);
    k.c.push_front(6_u8);
    k.c.push_front(5_u8);
    k.c.push_front(4_u8);
    k.c.push_front(3_u8);
    k.c.push_front(2_u8);
    k.c.push_front(1_u8);
    k.c.push_front(0_u8);
    let mut data = Vec::<u8>::with_capacity(30);
    let hw: u8 = 0b1000_10_00;
    data.push(hw);
    data.push(hw);
    let addr = [1_u8, 2_u8, 3_u8, 4_u8, 5_u8, 6_u8];
    data.extend_from_slice(&addr);
    data.extend_from_slice(&addr);
    data.extend_from_slice(&addr);
    data.push(55_u8);
    data.push(55_u8);
    data.push(hw);
    data.push(hw);
    k.c.reserve(data.len());
    let fcs = [0xAA_u8];
    println!();
    k.c.extend(&fcs);
}
