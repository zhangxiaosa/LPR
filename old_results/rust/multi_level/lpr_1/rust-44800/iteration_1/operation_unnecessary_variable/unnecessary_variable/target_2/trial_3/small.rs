use std::collections::VecDeque;

fn main() {
    let mut g_data = Vec::new();
    let fcs: [u8; 1] = [0xD9];
    g_data.push(69);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);
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
    println!();
    let _ = g_data.extend(&fcs);
}