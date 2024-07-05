use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    let mut g_data = Vec::with_capacity(20);
    let hw = 20;
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(hw);
    g_data.push(hw);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    let mut iter = g_data.iter().cloned();
    while let Some(b1) = iter.next() {
        k.c.push_front(b1);
        k.c.push_front(b1);
    }
    let hw_1 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        k.c.push_front(b);
    }
    for &b in addr.iter() {
        k.c.push_front(b);
    }
    for &b in addr.iter() {
        k.c.push_front(b);
    }
    k.c.push_front(55);
    k.c.push_front(55);
    k.c.push_front(hw_1);
    k.c.push_front(hw_1);
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}