use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw: u8 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    let fcs = [0xD9];

    // Loop unrolling
    k.push_front(g_data[3]);
    k.push_front(g_data[2]);
    k.push_front(g_data[1]);
    k.push_front(g_data[0]);

    g_data.push(hw);
    g_data.push(hw);

    for &b in addr.iter().cycle().take(18) {
        g_data.push(b);
    }

    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);

    k.reserve(g_data.len());

    println!();

    k.extend(&fcs);
}
