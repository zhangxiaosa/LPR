use std::collections::VecDeque;

fn main() {
    let mut k_c: Vec<u8> = vec![];
    let mut g_data: Vec<u8> = vec![];
    let fcs: [u8; 1] = [0xD9];

    g_data.push(69);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);

    k_c.push(7);
    k_c.push(6);
    k_c.push(5);
    k_c.push(4);
    k_c.push(3);
    k_c.push(2);
    k_c.push(1);
    k_c.push(0);

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

    k_c.reserve(g_data.len());

    println!();

    k_c.extend(&fcs);
}