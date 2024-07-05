use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k_c = VecDeque::with_capacity(18);
    k_c.push_front(0);
    k_c.push_front(1);
    k_c.push_front(2);
    k_c.push_front(3);
    k_c.push_front(4);
    k_c.push_front(5);
    k_c.push_front(6);
    k_c.push_front(7);

    k_c.reserve(20);
    println!();
    k_c.extend(&[0xAA]);
}