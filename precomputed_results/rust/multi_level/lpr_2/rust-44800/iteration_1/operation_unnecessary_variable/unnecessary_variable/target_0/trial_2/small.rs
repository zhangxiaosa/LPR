use std::collections::VecDeque;

fn main() {
    let mut g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw = 0b1000_10_00;
    let addr: u8 = 1;
    g_data.push(hw);
    g_data.push(hw);
    for _ in 0..18 {
        g_data.push(addr);
    }
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);
    let _ = g_data;
    println!();
    let _ = [0xD9];
}
