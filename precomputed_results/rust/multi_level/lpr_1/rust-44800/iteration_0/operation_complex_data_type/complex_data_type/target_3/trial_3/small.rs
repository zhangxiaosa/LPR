fn main() {
    let mut c = VecDeque::with_capacity(32);
    let mut k_c = &mut c;
    let mut data = Vec::with_capacity(20);
    let g_data = data.clone();
    let b: u8 = 0x45;
    let hw: u8 = 20;
    let addr: [u8; 1] = [1];
    let fcs: [u8; 1] = [0xD9];

    g_data.push(b);
    g_data.push(20);
    g_data.push(hw);
    g_data.push(hw);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);
    k_c.push_front(7);
    k_c.push_front(6);
    k_c.push_front(5);
    k_c.push_front(4);
    k_c.push_front(3);
    k_c.push_front(2);
    k_c.push_front(1);
    k_c.push_front(0);
    g_data.push(hw);
    g_data.push(hw);
    g_data.push(0);
    g_data.push(1);
    g_data.push(2);
    g_data.push(3);
    g_data.push(4);
    g_data.push(5);
    g_data.push(0);
    g_data.push(1);
    g_data.push(2);
    g_data.push(3);
    g_data.push(4);
    g_data.push(5);
    g_data.push(hw);
    g_data.push(hw);
    k_c.reserve(g_data.len());

    println!();

    k_c.extend(&fcs);
}