use std::collections::VecDeque;

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k_c = c;
    let mut k = a { c: k_c };

    let mut data = Vec::with_capacity(20);
    let mut g_data = data;
    let mut g = d { data: g_data };

    let b: u8 = 0x45;

    g.data.push(b);
    g.data.push(20);
    let hw: u8 = 20;
    g.data.push(hw);
    g.data.push(hw);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);

    let mut iter = g.data.iter().cloned();
    while let Some(b1) = iter.next() {
        let b2 = iter.next().unwrap_or(b1);
        k.c.push_front(b1);
        k.c.push_front(b2);
    }

    let mut data_1 = Vec::with_capacity(30);
    let mut g_1_data = data_1;
    let mut g_1 = d { data: g_1_data };

    let hw_1: u8 = 0b1000_10_00;

    g_1.data.push(hw_1);
    g_1.data.push(hw_1);

    let addr: [u8; 6] = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        g_1.data.push(b);
    }

    for &b in addr.iter() {
        g_1.data.push(b);
    }

    for &b in addr.iter() {
        g_1.data.push(b);
    }

    g_1.data.push(55);
    g_1.data.push(55);
    g_1.data.push(hw_1);
    g_1.data.push(hw_1);

    let k_c_len = g_1.data.len();
    k.c.reserve_exact(k_c_len);

    let fcs: [u8; 1] = [0xD9];
    println!();

    k.c.extend(&fcs);
}

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}
