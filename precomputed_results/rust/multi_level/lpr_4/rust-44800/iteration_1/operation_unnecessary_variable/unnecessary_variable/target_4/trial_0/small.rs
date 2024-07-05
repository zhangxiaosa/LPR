use std::collections::VecDeque;

fn main() {
    let mut c = VecDeque::with_capacity(32);
    let mut g_data = Vec::new();
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);

    for &b1 in &g_data {
        c.push_front(0x45);
        c.push_front(0x45);
    }

    c.reserve_exact(g_data.len());

    let fcs: [u8; 1] = [0xD9];

    println!();

    c.extend(&fcs);
}