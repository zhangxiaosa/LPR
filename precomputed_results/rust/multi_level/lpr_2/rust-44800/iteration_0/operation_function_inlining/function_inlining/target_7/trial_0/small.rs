use std::collections::VecDeque;

struct d {
    data: Vec<u8>,
}

impl d {
    // fn with_capacity(capacity: usize) -> Self {
    //     let data = Vec::with_capacity(capacity);
    //     d { data }
    // }
}

fn main() {
    let mut k = VecDeque::with_capacity(32);

    let mut g = d {
        data: Vec::with_capacity(20),
    };

    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 20;
    g.data.push(hw as u8);
    g.data.push(hw as u8);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);

    let mut g_l = d {
        data: Vec::with_capacity(30),
    };

    let hw_l = 0b1000_10_00;
    g_l.data.push(hw_l as u8);
    g_l.data.push(hw_l as u8);

    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        g_l.data.push(b);
    }
    for &b in addr.iter() {
        g_l.data.push(b);
    }
    for &b in addr.iter() {
        g_l.data.push(b);
    }
    g_l.data.push(55);
    g_l.data.push(55);
    g_l.data.push(hw_l as u8);
    g_l.data.push(hw_l as u8);

    k.reserve(g_l.data.len());
    for b in g_l.data.iter() {
        k.push_front(*b);
    }

    let fcs = [0xD9];
    println!();
    k.extend(&fcs);
}