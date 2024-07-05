use std::collections::VecDeque;

fn main() {
    let mut g_data = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw = 0b1000_10_00;
    let addr: u8 = 1;

    g_data.insert(0, 3);
    g_data.insert(0, 2);
    g_data.insert(0, 1);
    g_data.insert(0, g_data[0]);

    g_data.push(hw);
    g_data.push(hw);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(addr);
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);

    let _ = g_data.capacity();

    println!();
    println!("{:?}", &[0xD9]);
}
