use std::collections::VecDeque;

fn main() {
    let mut k: VecDeque<u8> = VecDeque::with_capacity(32);
    let mut g_data: Vec<u8> = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw: u8 = 0b1000_10_00;
    let addr: u8 = 1;
    let k_temp_1: u8 = 3;
    let k_temp_2: u8 = 2;
    let k_temp_3: u8 = 1;
    let k_temp_4: u8 = g_data[0];
    let g_data_temp_1: u8 = hw;
    let g_data_temp_2: u8 = hw;
    let g_data_temp_3: u8 = addr;
    let g_data_temp_4: u8 = 55;
    let g_data_temp_5: u8 = 55;
    let g_data_temp_6: u8 = hw;
    let g_data_temp_7: u8 = hw;
    k.push_front(k_temp_1);
    k.push_front(k_temp_2);
    k.push_front(k_temp_3);
    k.push_front(k_temp_4);
    g_data.push(g_data_temp_1);
    g_data.push(g_data_temp_2);
    for _ in 0..18 {
        g_data.push(g_data_temp_3);
    }
    g_data.push(g_data_temp_4);
    g_data.push(g_data_temp_5);
    g_data.push(g_data_temp_6);
    g_data.push(g_data_temp_7);
    k.reserve(g_data.len());
    println!();
    k.extend(&[0xD9]);
}