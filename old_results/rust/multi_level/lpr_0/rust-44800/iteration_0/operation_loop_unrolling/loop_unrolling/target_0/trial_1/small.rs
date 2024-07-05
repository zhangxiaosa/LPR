use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };
    let g = {
        let mut data = Vec::with_capacity(20);
        data.push(0x45);
        data.push(20);
        let hw = 20;
        data.push(hw);
        data.push(hw);
        data.push(21);
        data.push(21);
        data.push(23);
        data.push(23);
        data
    };

    if let Some(b) = g.iter().next() {
        k.c.push_front(*b);
    }

    if let Some(b) = g.iter().next() {
        k.c.push_front(*b);
    }

    if let Some(b) = g.iter().next() {
        k.c.push_front(*b);
    }

    let g = {
        let mut data = Vec::with_capacity(30);
        let hw = 0b1000_10_00;
        data.push(hw);
        data.push(hw);
        let addr = [1, 2, 3, 4, 5, 6];
        data.extend_from_slice(&addr);
        data.extend_from_slice(&addr);
        data.extend_from_slice(&addr);
        data.push(55);
        data.push(55);
        data.push(hw);
        data.push(hw);
        data
    };
    k.c.reserve(g.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}