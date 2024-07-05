use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g_data = Vec::with_capacity(20);
    let hw: u8 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    let fcs = [0xD9];
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(hw);
    g_data.push(hw);
    for &b in g_data.iter() {
        k.push_front(b);
    }
    g_data.push(hw);
    g_data.push(hw);
    for &b in addr.iter() {
        g_data.push(b);
    }
    for &b in addr.iter() {
        g_data.push(b);
    }
    for &b in addr.iter() {
        g_data.push(b);
    }
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);
    k.reserve(g_data.len());
    println!();
    k.extend(&fcs);
}
