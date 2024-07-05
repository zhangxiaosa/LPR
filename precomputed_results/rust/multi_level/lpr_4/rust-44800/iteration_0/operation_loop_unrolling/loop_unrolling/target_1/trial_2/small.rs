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
    let mut g = {
        let data = Vec::with_capacity(20);
        D { data }
    };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 20;
    g.data.push(hw);
    g.data.push(hw);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);

    k.c.push_front(g.data[7]);
    k.c.push_front(g.data[6]);
    k.c.push_front(g.data[5]);
    k.c.push_front(g.data[4]);
    k.c.push_front(g.data[3]);
    k.c.push_front(g.data[2]);
    k.c.push_front(g.data[1]);
    k.c.push_front(g.data[0]);

    let mut g_1 = {
        let data = Vec::with_capacity(30);
        D { data }
    };
    let hw_1 = 0b1000_10_00;
    g_1.data.push(hw_1);
    g_1.data.push(hw_1);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        g_1.data.push(b);
    }
    for &b in addr.iter() {
        g_1.data.push(b);
    }
    for &b in addr.iter() {
        g_1.data.push(b);
    }
    g_1.data.push(55);
    g_1.data.push(55);
    g_1.data.push(hw_1);
    g_1.data.push(hw_1);

    k.c.reserve_exact(g_1.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}