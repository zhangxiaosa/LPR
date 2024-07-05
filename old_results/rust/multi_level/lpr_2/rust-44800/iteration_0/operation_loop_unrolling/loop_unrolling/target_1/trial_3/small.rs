use std::collections::VecDeque;

struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g = d {
        data: Vec::with_capacity(20),
    };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 0b1000_10_00;
    g.data.push(hw);
    g.data.push(hw);
    k.push_front(g.data[0]);
    k.push_front(g.data[1]);
    k.push_front(g.data[2]);
    g.data.push(hw);
    g.data.push(hw);
    let addr = [1, 2, 3, 4, 5, 6];
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);
    g.data.push(55);
    g.data.push(55);
    g.data.push(hw);
    g.data.push(hw);
    k.reserve(g.data.len() * 3);
    let fcs = [0xD9];
    println!();
    k.extend(&fcs);
}