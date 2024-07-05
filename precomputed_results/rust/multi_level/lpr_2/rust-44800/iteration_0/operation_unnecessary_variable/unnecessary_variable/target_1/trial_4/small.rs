use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];

    let hw: u8 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    let fcs = [0xD9];

    g_data.push(hw);
    g_data.push(hw);

    for &b in addr.iter() {
        g_data.push(b);
    }

    for &b in addr.iter() {
        g_data.push(b);
    }

    for &b in addr.iter() {
        g_data.push(b);
    }

    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);

    let k = &mut k;
    k.extend(g_data.iter().cloned());
    println!();
    k.extend(&[0xD9]);
}