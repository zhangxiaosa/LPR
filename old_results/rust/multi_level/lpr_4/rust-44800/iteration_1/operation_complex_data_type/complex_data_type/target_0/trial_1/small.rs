use std::collections::VecDeque;

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    
    let mut g_data = Vec::with_capacity(20);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    
    let mut iter = g_data.iter().cloned();
    while let Some(b1) = iter.next() {
        k.c.push_front(b1);
        k.c.push_front(b1);
    }
    
    let hw_1 = 0b1000_10_00;
    let mut g_1_data = vec![hw_1, hw_1];
    
    let addr = [1, 2, 3, 4, 5, 6];
    let addr_len = addr.len();
    g_1_data.reserve_exact(hw_1 as usize * addr_len * 3);
    
    for _ in 0..3 {
        g_1_data.extend_from_slice(&addr);
    }
    
    k.c.reserve_exact(g_1_data.len());
    
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}

struct a {
    c: VecDeque<u8>,
}