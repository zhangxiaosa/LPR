use std::vec::Vec;

struct a {
    c: Vec<u8>,
}

fn main() {
    let c = Vec::new();
    let mut k = a { c };
    k.c.push(7);
    k.c.push(6);
    k.c.push(5);
    k.c.push(4);
    k.c.push(3);
    k.c.push(2);
    k.c.push(1);
    k.c.push(0);
    let g = {
        let mut data = Vec::with_capacity(30);
        let hw = 0b10001000;
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
    let fcs = [0xAA];
    println!("");
    k.c.extend(&fcs);
}