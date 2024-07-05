
use std::collections::VecDeque;

fn main() {
    let mut k: Vec<u8> = Vec::with_capacity(32);
    let mut g_data: Vec<u8> = vec![0x45, 20, 0b1000_10_00, 0b1000_10_00];
    let hw: u8 = 0b1000_10_00;
    let addr: u8 = 1;
    k.insert(0, 3);
    k.insert(0, 2);
    k.insert(0, 1);
    k.insert(0, g_data[0]);
    k.extend_from_slice(&g_data);
    println!();
    k.extend(&[0xD9]);
}