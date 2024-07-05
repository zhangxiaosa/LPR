use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g_data = Vec::<u8>::with_capacity(4);
    
    let element_1: u8 = 0x45;
    let element_2: u8 = 20;
    let element_3: u8 = 0b1000_10_00;
    let element_4: u8 = 0b1000_10_00;
    
    let hw: u8 = 0b1000_10_00;
    let addr: u8 = 1;
    
    k.push_front(3);
    k.push_front(2);
    k.push_front(1);
    k.push_front(element_1);
    
    g_data.push(element_1);
    g_data.push(element_2);
    g_data.push(element_3);
    g_data.push(element_4);
    g_data.push(hw);
    g_data.push(hw);
    
    for _ in 0..18 {
        g_data.push(addr);
    }
    
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);
    
    k.reserve(g_data.len());
    
    println!();
    
    k.extend(&[0xD9]);
}