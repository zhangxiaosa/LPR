fn main() {
    let mut k_c: u8[] = [0; 32];
    let mut g_data: u8[] = [];
    let fcs: u8[] = [0xD9];

    g_data.push(69);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);

    k_c[7..].copy_from_slice(&[6, 5, 4, 3, 2, 1, 0]);

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

    k_c.copy_from_slice(&fcs);

    println!();
}