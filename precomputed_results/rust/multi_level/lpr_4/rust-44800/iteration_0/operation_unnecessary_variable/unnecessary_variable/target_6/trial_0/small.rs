use std::collections::VecDeque;

fn main() {
    let mut g_data = Vec::with_capacity(20);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    let mut iter = g_data.iter().cloned();
    let mut c = VecDeque::with_capacity(g_data.len() * 2);
    while let Some(b1) = iter.next() {
        c.push_front(b1);
        c.push_front(b1);
    }
    let hw_1 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    let mut g_1_data = vec![hw_1, hw_1];
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.push(55);
    c.reserve_exact(g_1_data.len());
    let fcs = [0xD9];
    println!();
    c.extend(&fcs);
}