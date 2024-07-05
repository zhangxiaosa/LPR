use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    let g_data_0: u8 = 0x45;
    let g_data_1: u8 = 20;
    let g_data_2: u8 = 20;
    let g_data_3: u8 = 20;
    let g_data_4: u8 = 21;
    let g_data_5: u8 = 21;
    let mut g_data_decomposed: Vec<u8> = Vec::new();
    g_data_decomposed.push(g_data_0);
    g_data_decomposed.push(g_data_1);
    g_data_decomposed.push(g_data_2);
    g_data_decomposed.push(g_data_3);
    g_data_decomposed.push(g_data_4);
    g_data_decomposed.push(g_data_5);
    let mut iter = g_data_decomposed.iter().cloned();
    while let Some(b1) = iter.next() {
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