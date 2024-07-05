fn main() {
    let mut k: VecDeque<u8> = VecDeque::with_capacity(32);
    let mut g_data: Vec<u8> = Vec::with_capacity(20);
    let b: u8 = 0x45;
    g_data.push(b);
    g_data.push(20);
    let hw: u8 = 0b1000_10_00;
    g_data.push(hw);
    g_data.push(hw);
    for &b in g_data.iter() {
        k.push_front(b);
    }
    g_data.push(hw);
    g_data.push(hw);
    let addr: [u8; 6] = [1, 2, 3, 4, 5, 6];
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
    k.reserve(g_data.len());
    let fcs: [u8; 1] = [0xD9];
    println!();
    k.extend(&fcs);
}
