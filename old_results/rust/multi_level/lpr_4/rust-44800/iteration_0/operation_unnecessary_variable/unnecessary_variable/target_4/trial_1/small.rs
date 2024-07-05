use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    
    k.c.push_front(0x45);
    k.c.push_front(20);
    k.c.push_front(20);
    k.c.push_front(21);
    k.c.push_front(21);
    k.c.push_front(23);
  
    let hw_1 = 0b1000_10_00;
    let addr = [1, 2, 3, 4, 5, 6];
    k.c.reserve_exact(2 + addr.len() * 3 + 1);
    let fcs = [0xD9];
  
    k.c.extend(&fcs);
}
