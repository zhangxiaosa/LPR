use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    let mut g_1_data = vec![0b1000_10_00, 0b1000_10_00];
    let addr = [1, 2, 3, 4, 5, 6];
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.push(55);
    k.c.reserve_exact(g_1_data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}
