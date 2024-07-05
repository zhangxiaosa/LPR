use std::collections::VecDeque;

fn main() {
    let mut g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw = 0b1000_10_00;
    let addr: u8 = 1;
    g_data.push_front(3);
    g_data.push_front(2);
    g_data.push_front(1);
    g_data.push_front(g_data[0]);
    g_data.push(hw);
    g_data.push(hw);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);
    g_data.reserve_exact(g_data.len() + 1);
    g_data.push(0xD9);
}