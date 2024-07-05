use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    k.c.push_front(7);
    k.c.push_front(6);
    k.c.push_front(5);
    k.c.push_front(4);
    k.c.push_front(3);
    k.c.push_front(2);
    k.c.push_front(1);
    k.c.push_front(0);
    let mut data = Vec::with_capacity(30);
    let _ = data.push(0b1000_10_00); // Optimized
    let _ = data.push(0b1000_10_00); // Optimized
    let _ = data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    let _ = data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    let _ = data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    let _ = data.push(55);
    let _ = data.push(55);
    let _ = data.push(0b1000_10_00); // Optimized
    let _ = data.push(0b1000_10_00); // Optimized
    k.c.reserve(17); // Optimized based on the length of the optimized data
    let fcs = [0xAA];
    println!();
    k.c.extend(&fcs);
}