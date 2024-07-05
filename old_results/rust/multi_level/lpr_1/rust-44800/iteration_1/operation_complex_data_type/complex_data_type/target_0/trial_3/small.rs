use std::collections::VecDeque;

fn main() {
    let c_capacity: usize = 32;
    let c_contents: VecDeque<i32> = VecDeque::with_capacity(c_capacity);
    let mut k_c_capacity: usize = c_capacity;
    let mut k_c_contents: VecDeque<i32> = c_contents.clone();
    let mut g_data: Vec<i32> = Vec::new();

    g_data.push(0x45);
    g_data.push(20);
    // ...

    k_c_contents.push_front(7);
    k_c_contents.push_front(6);
    // ...

    g_data.push(20);
    g_data.push(20);
    // ...

    k_c_contents.reserve(g_data.len());
    let fcs: [u8; 1] = [0xD9];

    println!();

    k_c_contents.extend(&fcs);
}