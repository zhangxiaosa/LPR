use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

fn main() {
    let c_capacity = 32;
    let mut c = VecDeque::with_capacity(c_capacity);
    let mut k_c = c.clone();
    let mut k = a { c: k_c };

    let g_data_capacity = 20;
    let mut g_data = Vec::with_capacity(g_data_capacity);
    let mut g = {
        let data = &mut g_data;
        d { data }
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

    let mut iter = g.data.iter().cloned();
    while let Some(b1) = iter.next() {
        let b2 = iter.next().unwrap_or(b1);
        k.c.push_front(b1);
        k.c.push_front(b2);
    }

    let g_1_data_capacity = 30;
    let mut g_1_data = Vec::with_capacity(g_1_data_capacity);
    let mut g_1 = {
        let data = &mut g_1_data;
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

    let k_c_capacity = g_1.data.len();
    k.c.reserve_exact(k_c_capacity);

    let fcs = [0xD9];
    k.c.extend(&fcs);

    println!();
}