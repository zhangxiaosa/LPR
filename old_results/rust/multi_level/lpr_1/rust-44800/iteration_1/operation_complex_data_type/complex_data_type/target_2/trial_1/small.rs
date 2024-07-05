use std::collections::VecDeque;

fn main() {
    let mut k_c = VecDeque::with_capacity(32);
    let mut g_data = Vec::new();
    let fcs: [u8; 1] = [0xD9];

    let g_data_0: u8 = 0x45;
    let g_data_1: u8 = 20;
    let g_data_2: u8 = 20;
    let g_data_3: u8 = 20;
    let g_data_4: u8 = 21;
    let g_data_5: u8 = 21;
    let g_data_6: u8 = 23;
    let g_data_7: u8 = 23;

    let g_data_8: u8 = 20;
    let g_data_9: u8 = 20;
    let g_data_10: u8 = 0;
    let g_data_11: u8 = 1;
    let g_data_12: u8 = 2;
    let g_data_13: u8 = 3;
    let g_data_14: u8 = 4;
    let g_data_15: u8 = 5;
    let g_data_16: u8 = 0;
    let g_data_17: u8 = 1;
    let g_data_18: u8 = 2;
    let g_data_19: u8 = 3;
    let g_data_20: u8 = 4;
    let g_data_21: u8 = 5;
    let g_data_22: u8 = 20;
    let g_data_23: u8 = 20;

    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);

    k_c.reserve(g_data.len());

    println!();

    k_c.extend(&fcs);
}