use std::collections::VecDeque;

fn main() {
    let mut k_c = VecDeque::with_capacity(32);
    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);
    k_c.push(20);
    k_c.push(20);
    k_c.push(0);
    k_c.push(1);
    k_c.push(2);
    k_c.push(3);
    k_c.push(4);
    k_c.push(5);
    k_c.push(0);
    k_c.push(1);
    k_c.push(2);
    k_c.push(3);
    k_c.push(4);
    k_c.push(5);
    k_c.push(20);
    k_c.push(20);
    let fcs: [u8; 1] = [0xD9];
    println!();
    k_c.extend(&fcs);
}