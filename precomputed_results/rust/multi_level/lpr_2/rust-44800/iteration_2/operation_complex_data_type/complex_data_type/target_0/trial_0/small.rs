
use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    
    let g_data_0: u8 = 0x45;
    let g_data_1: u8 = 20;
    let g_data_2: u8 = 0b1000_10_00;
    let g_data_3: u8 = 0b1000_10_00;
    
    let hw: u8 = 0b1000_10_00;
    let addr: u8 = 1;
    
    k.push_front(3);
    k.push_front(2);
    k.push_front(1);
    k.push_front(g_data_0);
    
    let g_data = vec![g_data_0, g_data_1, g_data_2, g_data_3];
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
    g_data.push(addr);
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);
    
    k.reserve_exact(g_data.len());
    println!();
    k.extend(&[0xD9]);
}