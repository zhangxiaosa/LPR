use std::collections::VecDeque;

fn main() {
    let mut k_c_elements = Vec::new();
    let mut g_data = Vec::new();
    let fcs: [u8; 1] = [0xD9];

    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);

    k_c_elements.push(7);
    k_c_elements.push(6);
    k_c_elements.push(5);
    k_c_elements.push(4);
    k_c_elements.push(3);
    k_c_elements.push(2);
    k_c_elements.push(1);
    k_c_elements.push(0);

    g_data.push(20);
    g_data.push(20);
    g_data.push(0);
    g_data.push(1);
    g_data.push(2);
    g_data.push(3);
    g_data.push(4);
    g_data.push(5);
    g_data.push(0);
    g_data.push(1);
    g_data.push(2);
    g_data.push(3);
    g_data.push(4);
    g_data.push(5);
    g_data.push(20);
    g_data.push(20);

    k_c_elements.reserve(g_data.len());

    println!();

    k_c_elements.extend(&fcs);
}