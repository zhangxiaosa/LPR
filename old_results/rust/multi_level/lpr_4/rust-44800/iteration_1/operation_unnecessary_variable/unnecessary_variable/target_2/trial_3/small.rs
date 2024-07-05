use std::collections::VecDeque;

fn main() {
    let mut g_data = Vec::with_capacity(20);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);

    for &b1 in &g_data {
        // Code inside the loop
    }

    let hw_1 = 0b1000_10_00;

    let mut g_1_data = Vec::with_capacity(20);
    g_1_data.resize(2, hw_1);
    g_1_data.extend(&[1, 2, 3, 4, 5, 6]);
    g_1_data.extend(&[1, 2, 3, 4, 5, 6]);
    g_1_data.extend(&[1, 2, 3, 4, 5, 6]);

    let fcs: [u8; 1] = [0xD9];

    println!();

    // Code after removing 'c'
}