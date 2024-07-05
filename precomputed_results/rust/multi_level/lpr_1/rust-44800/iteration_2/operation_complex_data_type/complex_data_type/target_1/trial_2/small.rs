use std::collections::VecDeque;

fn main() {
    let k_c_capacity: i32 = 32;
    let k_c_items_front: [i32; 8] = [7, 6, 5, 4, 3, 2, 1, 0];
    let k_c_items_back: [i32; 16] = [20, 20, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 20, 20];
    let mut k_c: VecDeque<i32> = VecDeque::with_capacity(k_c_capacity);
    k_c.extend(k_c_items_front.iter().rev());
    k_c.extend(k_c_items_back.iter());

    let mut g_data = Vec::new();
    let fcs: [u8; 1] = [0xD9];
    g_data.push(69);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    g_data.push(23);
    g_data.extend(k_c_items_back.iter());

    println!("\n");
    k_c.extend(&fcs);
}