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

    let hw_1 = 0b1000_10_00;

    c.reserve_exact(
        [
            0b1000_10_00,
            0b1000_10_00,
            1,
            2,
            3,
            4,
            5,
            6,
            1,
            2,
            3,
            4,
            5,
            6,
            1,
            2,
            3,
            4,
            5,
            6,
        ]
        .len(),
    );

    let fcs: [u8; 1] = [0xD9];

    println!();

    c.extend(&fcs);
}
