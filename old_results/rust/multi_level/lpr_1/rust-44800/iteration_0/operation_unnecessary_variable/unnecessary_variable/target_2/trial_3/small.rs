use std::collections::VecDeque;

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k_c = c;
    let data = Vec::with_capacity(20);
    let hw = 20;
    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);
    k_c.push_front(hw);
    k_c.push_front(hw);
    k_c.push_front(0);
    k_c.push_front(1);
    k_c.push_front(2);
    k_c.push_front(3);
    k_c.push_front(4);
    k_c.push_front(5);
    k_c.push_front(0);
    k_c.push_front(1);
    k_c.push_front(2);
    k_c.push_front(3);
    k_c.push_front(4);
    k_c.push_front(5);
    k_c.push_front(hw);
    k_c.push_front(hw);
    k_c.reserve(1);
    let fcs: [u8; 1] = [0xD9];
    println!();
    k_c.extend(&fcs);
}