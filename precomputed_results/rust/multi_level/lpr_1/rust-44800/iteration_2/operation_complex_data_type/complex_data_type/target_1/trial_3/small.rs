fn main() {
    let mut k_c: VecDeque<u8> = VecDeque::with_capacity(32);
    let mut g_data: Vec<u8> = Vec::new();
    let fcs: [u8; 1] = [0xD9];
    let mut g_data_values: Vec<u8> = vec![
        69, 20, 20, 20, 21, 21, 23, 23, 20, 20, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 20, 20
    ];

    g_data.append(&mut g_data_values);

    let mut k_c_values: Vec<u8> = vec![7, 6, 5, 4, 3, 2, 1, 0];

    k_c.append(&mut k_c_values);

    k_c.append(&mut fcs.to_vec());

    println!();
}