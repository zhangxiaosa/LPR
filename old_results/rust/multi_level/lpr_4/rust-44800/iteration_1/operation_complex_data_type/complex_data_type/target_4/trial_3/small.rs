use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k_c = VecDeque::with_capacity(32);
    let mut k = a { c: k_c };

    let mut g_data_capacity = 20;
    let mut g_data = Vec::with_capacity(g_data_capacity);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);

    let mut iter_cloned = g_data.iter().cloned();
    let mut iter_next;
    while let Some(b1) = iter_next = iter_cloned.next() {
        k.c.push_front(b1);
        k.c.push_front(b1);
    }

    let hw_1: u8 = 0b1000_10_00;

    let addr: [u8; 6] = [1, 2, 3, 4, 5, 6];
    let addr_len = addr.len();
    let mut g_1_data_capacity = 20 + (addr_len * 3);
    let mut g_1_data = Vec::with_capacity(g_1_data_capacity);

    g_1_data.resize(2, hw_1);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);

    let g_1_data_len = g_1_data.len();
    let k_c_reserve_len = g_1_data_len;
    k.c.reserve_exact(k_c_reserve_len);

    let fcs: [u8; 1] = [0xD9];

    println!();

    k.c.extend(&fcs);
}