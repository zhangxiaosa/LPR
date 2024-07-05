use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let constant_g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let constant_hw = 0b1000_10_00;
    let addr: u8 = 1;
    k.push_front(3);
    k.push_front(2);
    k.push_front(1);
    k.push_front(constant_g_data[0]);
    constant_g_data.push(constant_hw);
    constant_g_data.push(constant_hw);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(addr);
    constant_g_data.push(55);
    constant_g_data.push(55);
    constant_g_data.push(constant_hw);
    constant_g_data.push(constant_hw);
    k.reserve_exact(constant_g_data.len());
    println!();
    k.extend(&[0xD9]);
}