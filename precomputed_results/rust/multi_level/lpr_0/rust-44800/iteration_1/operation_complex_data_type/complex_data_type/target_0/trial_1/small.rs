use std::collections::VecDeque;

fn main() {
    let mut k_c: VecDeque<u8> = VecDeque::with_capacity(18);
    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);

    let mut data: Vec<u8> = Vec::with_capacity(20);
    data.push(0b1000_10_00);
    data.push(1);
    data.push(2);
    data.push(3);
    data.push(4);
    data.push(5);
    data.push(6);
    data.push(55);

    let reserve_len = data.len();
    let extend_slice = &[0xAA];

    k_c.reserve(reserve_len);

    println!();

    k_c.extend(extend_slice);
}