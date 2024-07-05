use std::collections::VecDeque;

fn main() {
    let k_c = vec![0, 1, 2, 3, 4, 5, 6, 7];
    let mut g_data = Vec::new();
    let fcs: [u8; 1] = [0xD9];
    
    g_data.extend_from_slice(&[69, 20, 20, 20, 21, 21, 23, 23, 20, 20, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 20, 20]);
    
    let mut k_c_deque = VecDeque::from(k_c);
    k_c_deque.reserve(g_data.len());
    
    println!();
    k_c_deque.extend(&fcs);
}