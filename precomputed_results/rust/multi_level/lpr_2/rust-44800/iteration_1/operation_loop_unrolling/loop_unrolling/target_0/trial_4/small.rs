use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw: u8 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    let fcs = [0xD9];

    for &b in g_data.iter() {
        k.push_front(b);
    }

    g_data.push(hw);
    g_data.push(hw);

    g_data.push(addr[0]);
    g_data.push(addr[1]);
    g_data.push(addr[2]);
    g_data.push(addr[0]);
    g_data.push(addr[1]);
    g_data.push(addr[2]);
    g_data.push(addr[0]);
    g_data.push(addr[1]);
    g_data.push(addr[2]);

    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);

    k.reserve(g_data.len() + fcs.len());

    println!();

    for &b in &fcs {
        k.push_back(b);
    }
}