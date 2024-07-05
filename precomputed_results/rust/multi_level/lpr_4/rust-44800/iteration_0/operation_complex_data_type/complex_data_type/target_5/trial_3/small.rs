fn main() {
    let mut c = Vec::with_capacity(32);
    let mut k_c = Vec::with_capacity(32);
    let mut g_data = Vec::with_capacity(20);
    let b: u8 = 0x45;
    g_data.push(b);
    g_data.push(20);
    let hw: u8 = 20;
    g_data.push(hw);
    g_data.push(hw);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    let mut iter = g_data.iter().cloned();
    while let Some(b1) = iter.next() {
        let b2 = iter.next().unwrap_or(b1);
        k_c.push(b1);
        k_c.push(b2);
    }
    let mut g_1_data = Vec::with_capacity(30);
    let hw_1: u8 = 0b1000_10_00;
    g_1_data.push(hw_1);
    g_1_data.push(hw_1);
    let addr = [1u8, 2u8, 3u8, 4u8, 5u8, 6u8];
    for &b in addr.iter() {
        g_1_data.push(b);
    }
    for &b in addr.iter() {
        g_1_data.push(b);
    }
    for &b in addr.iter() {
        g_1_data.push(b);
    }
    g_1_data.push(55);
    g_1_data.push(55);
    g_1_data.push(hw_1);
    g_1_data.push(hw_1);
    let mut k_c_cap = g_1_data.len();
    let fcs = [0xD9];
    println!();
    k_c.extend(&fcs);
}