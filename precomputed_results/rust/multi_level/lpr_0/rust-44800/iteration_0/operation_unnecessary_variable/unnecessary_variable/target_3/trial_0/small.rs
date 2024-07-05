use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(18),
    };
    k.c.push_front(7);
    k.c.push_front(6);
    k.c.push_front(5);
    k.c.push_front(4);
    k.c.push_front(3);
    k.c.push_front(2);
    k.c.push_front(1);
    k.c.push_front(0);

    let mut data = Vec::with_capacity(20);
    data.push(0b1000_10_00);
    data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    data.push(55);
    data.push(0b1000_10_00);

    k.c.reserve(data.len());
    println!();
}