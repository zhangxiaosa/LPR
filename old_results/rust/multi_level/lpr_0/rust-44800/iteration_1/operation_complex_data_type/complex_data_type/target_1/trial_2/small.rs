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

    let mut data = Vec::with_capacity(20);

    data.push(136);
    data.push(1);
    data.push(2);
    data.push(3);
    data.push(4);
    data.push(5);
    data.push(6);
    data.push(55);

    let mut k = a {
        c: k_c,
    };

    k.c.reserve(data.len());

    println!();

    k.c.extend(&[0xAA]);
}