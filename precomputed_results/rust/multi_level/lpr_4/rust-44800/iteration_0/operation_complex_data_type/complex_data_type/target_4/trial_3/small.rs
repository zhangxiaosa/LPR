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
    let mut data = {
        let data = Vec::with_capacity(20);
        data
    };
    let b = 0x45;
    data.push(b);
    data.push(20);
    let hw = 20;
    data.push(hw);
    data.push(hw);
    data.push(21);
    data.push(21);
    data.push(23);
    let mut iter = data.iter().cloned();
    while let Some(b1) = iter.next() {
        let b2 = iter.next().unwrap_or(b1);
        k.c.push_front(b1);
        k.c.push_front(b2);
    }
    let mut data_1 = {
        let data = Vec::with_capacity(30);
        data
    };
    let hw_1 = 0b1000_10_00;
    data_1.push(hw_1);
    data_1.push(hw_1);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        data_1.push(b);
    }
    for &b in addr.iter() {
        data_1.push(b);
    }
    for &b in addr.iter() {
        data_1.push(b);
    }
    data_1.push(55);
    data_1.push(55);
    data_1.push(hw_1);
    data_1.push(hw_1);
    k.c.reserve_exact(data_1.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}
