use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    
    k.c.push(0x45);
    k.c.push(20);
    k.c.push(20);
    k.c.push(20);
    k.c.push(21);
    k.c.push(21);
    k.c.push(23);
    
    let mut iter = k.c.iter().cloned();
    
    while let Some(b1) = iter.next() {
        k.c.push_front(b1);
        k.c.push_front(b1); // replace b2 with b1
    }
    
    let addr = [1, 2, 3, 4, 5, 6];
    let mut g_1_data = vec![0b1000_10_00, 0b1000_10_00];
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.extend(&addr);
    g_1_data.push(55);
    
    k.c.reserve_exact(g_1_data.len());
    
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}