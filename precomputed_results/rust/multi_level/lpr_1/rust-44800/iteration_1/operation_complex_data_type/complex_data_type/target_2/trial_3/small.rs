use std::collections::VecDeque;

fn main() {
    let mut k_c = VecDeque::with_capacity(32);
    let mut g_data_modified = Vec::new();
    let fcs: [u8; 1] = [0xD9];

    g_data_modified.push(0x45);
    g_data_modified.push(20);
    g_data_modified.push(20);
    g_data_modified.push(20);
    g_data_modified.push(21);
    g_data_modified.push(21);
    g_data_modified.push(23);
    g_data_modified.push(23);

    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);

    g_data_modified.push(20);
    g_data_modified.push(20);
    g_data_modified.push(0);
    g_data_modified.push(1);
    g_data_modified.push(2);
    g_data_modified.push(3);
    g_data_modified.push(4);
    g_data_modified.push(5);
    g_data_modified.push(0);
    g_data_modified.push(1);
    g_data_modified.push(2);
    g_data_modified.push(3);
    g_data_modified.push(4);
    g_data_modified.push(5);
    g_data_modified.push(20);
    g_data_modified.push(20);

    k_c.reserve(g_data_modified.len());

    println!();

    k_c.extend(&fcs);
}
