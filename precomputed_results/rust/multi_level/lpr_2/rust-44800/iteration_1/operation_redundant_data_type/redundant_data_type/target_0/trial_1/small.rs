fn main() {
    let mut k = Vec::with_capacity(32);
    let mut g_data: Vec<u8> = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw: u8 = 0b1000_10_00;
    let addr: [u8; 1] = [1];
    let fcs: [u8; 1] = [0xD9];
    k.insert(0, 3);
    k.insert(0, 2);
    k.insert(0, 1);
    k.insert(0, g_data[0]);
    g_data.push(hw);
    g_data.push(hw);
    for &b in addr.iter().cycle().take(18) {
        g_data.push(b);
    }
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);
    k.extend(fcs.iter());
    println!();
}