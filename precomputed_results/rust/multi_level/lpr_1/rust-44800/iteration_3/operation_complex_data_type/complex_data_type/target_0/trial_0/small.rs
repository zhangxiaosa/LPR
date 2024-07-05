use std::collections::VecDeque;

fn main() {
    let mut k_c = VecDeque::new();
    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);
    k_c.reserve(24);
    println!();
    k_c.push_back(0xD9);
}