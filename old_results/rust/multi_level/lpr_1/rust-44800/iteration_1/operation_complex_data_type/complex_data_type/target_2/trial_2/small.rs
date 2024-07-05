use std::collections::VecDeque;

fn main() {
    let mut k_c = VecDeque::with_capacity(32);
    let mut g_data = Vec::new();
    let fcs: [u8; 1] = [0xD9];

    let g_data_value_1 = 0x45;
    let g_data_value_2 = 20;
    let g_data_value_3 = 20;
    let g_data_value_4 = 20;
    let g_data_value_5 = 21;
    let g_data_value_6 = 21;
    let g_data_value_7 = 23;
    let g_data_value_8 = 23;
    let g_data_value_9 = 20;
    let g_data_value_10 = 20;
    let g_data_value_11 = 0;
    let g_data_value_12 = 1;
    let g_data_value_13 = 2;
    let g_data_value_14 = 3;
    let g_data_value_15 = 4;
    let g_data_value_16 = 5;
    let g_data_value_17 = 0;
    let g_data_value_18 = 1;
    let g_data_value_19 = 2;
    let g_data_value_20 = 3;
    let g_data_value_21 = 4;
    let g_data_value_22 = 5;
    let g_data_value_23 = 20;
    let g_data_value_24 = 20;

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