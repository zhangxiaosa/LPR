use std::collections::VecDeque;

fn main() {
    let mut k_c: VecDeque<u8> = VecDeque::with_capacity(32);
    let mut g_data: Vec<u8> = Vec::new();
    let fcs: [u8; 1] = [0xD9];
    let mut temp: VecDeque<u8> = VecDeque::new();

    g_data.push(69);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);

    temp.push_front(7);
    temp.push_front(6);
    temp.push_front(5);
    temp.push_front(4);
    temp.push_front(3);
    temp.push_front(2);
    temp.push_front(1);
    temp.push_front(0);

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
    k_c.extend(&fcs);
    k_c.append(&mut temp);
}