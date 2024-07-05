fn main() {
    let mut k_c: Vec<u8> = Vec::with_capacity(32);
    let mut g_data = Vec::new();
    let fcs: [u8; 1] = [0xD9];

    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);

    k_c.insert(0, 7);
    k_c.insert(0, 6);
    k_c.insert(0, 5);
    k_c.insert(0, 4);
    k_c.insert(0, 3);
    k_c.insert(0, 2);
    k_c.insert(0, 1);
    k_c.insert(0, 0);

    g_data.push(20);
    g_data.push(20);
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
    g_data.push(20);
    g_data.push(20);

    println!();

    k_c.extend(&fcs);
}