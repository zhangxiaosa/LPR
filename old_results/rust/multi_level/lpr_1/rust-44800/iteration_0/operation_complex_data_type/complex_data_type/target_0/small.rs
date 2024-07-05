use std::collections::VecDeque;

struct A {
    c: VecDeque<u8>,
}

struct D {
    data: Vec<u8>,
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = A { c };
    let data = Vec::with_capacity(20);
    let mut g = D { data };
    let b: u8 = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw: u8 = 20;
    g.data.push(hw);
    g.data.push(hw);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);
    k.c.push_front(7);
    k.c.push_front(6);
    k.c.push_front(5);
    k.c.push_front(4);
    k.c.push_front(3);
    k.c.push_front(2);
    k.c.push_front(1);
    k.c.push_front(0);
    let data = Vec::with_capacity(30);
    D { data };
    g.data.push(hw);
    g.data.push(hw);
    let addr: [u8; 1] = [1];
    g.data.push(0);
    g.data.push(1);
    g.data.push(2);
    g.data.push(3);
    g.data.push(4);
    g.data.push(5);
    g.data.push(0);
    g.data.push(1);
    g.data.push(2);
    g.data.push(3);
    g.data.push(4);
    g.data.push(5);
    g.data.push(hw);
    g.data.push(hw);
    k.c.reserve(g.data.len());
    let fcs: [u8; 1] = [0xD9];
    println!();
    k.c.extend(&fcs);
}
