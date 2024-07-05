use std::collections::VecDeque;

fn main() {
    let mut k_c = VecDeque::with_capacity(32);
    let mut g_data = Vec::with_capacity(20);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    let mut iter = g_data.iter().cloned();
    while let Some(b1) = iter.next() {
        k_c.push_front(b1);
        k_c.push_front(b1);
    }
    let hw_1 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    let mut g_1_data = vec![hw_1, hw_1];
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    let mut k_c_reserve_exact = VecDeque::with_capacity(g_1_data.len());
    let fcs = [0xD9];
    println!();
    k_c.extend(&fcs);
}