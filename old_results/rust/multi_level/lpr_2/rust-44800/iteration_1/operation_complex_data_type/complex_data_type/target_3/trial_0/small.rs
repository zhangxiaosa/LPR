fn main() {
    let mut k: Vec<u8> = Vec::with_capacity(32);
    let mut g_data: Vec<u8> = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw: u8 = 0b1000_10_00;
    let addr: u8 = 1;

    k.insert(0, 3);
    k.insert(0, 2);
    k.insert(0, 1);
    k.insert(0, g_data[0]);
    g_data.push(hw);
    g_data.push(hw);
    for _ in 0..18 {
        g_data.push(addr);
    }
    g_data.push(55);
    g_data.push(55);
    g_data.push(hw);
    g_data.push(hw);
    k.reserve(g_data.len());
    println!();
    k.extend(&[0xD9]);

    k.shrink_to_fit();
    let k_length = k.len();
    let k_capacity = k.capacity();
    println!("k length: {}, capacity: {}", k_length, k_capacity);

    let k_optimized: Vec<u8> = k.into();
}