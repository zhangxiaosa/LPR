use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };
    let mut g_data = {
        let data = Vec::with_capacity(20);
        d { data }
    };
    let b = 0x45;
    g_data.data.push(b);
    g_data.data.push(20);
    let hw = 20;
    g_data.data.push(hw);
    g_data.data.push(hw);
    g_data.data.push(21);
    g_data.data.push(21);
    g_data.data.push(23);
    let mut iter = g_data.data.iter().cloned();
    while let Some(b1) = iter.next() {
        let b2 = iter.next().unwrap_or(b1);
        k.c.push_front(b1);
        k.c.push_front(b2);
    }
    let mut g_1 = {
        let data = Vec::with_capacity(30);
        d { data }
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
