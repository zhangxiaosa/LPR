use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    let mut g_data = Vec::with_capacity(20);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);

    // Extract the values from `iter` into a new variable `iter_values`
    let iter_values: Vec<u8> = g_data.iter().cloned().collect();

    for b1 in iter_values {
        k.c.push_front(b1);
        k.c.push_front(b1);
    }

    let hw_1: u8 = 0b1000_10_00;
    let addr: [u8; 6] = [1, 2, 3, 4, 5, 6];
    let mut g_1_data: Vec<u8> = Vec::with_capacity(20 + (addr.len() * 3));
    g_1_data.resize(2, hw_1);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    k.c.reserve_exact(g_1_data.len());
    let fcs: [u8; 1] = [0xD9];

    println!();

    k.c.extend(&fcs);
}