use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

fn j(k: &mut a) {
    let mut g = {
        let mut data = Vec::with_capacity(20);
        data.push(0x45);
        data.push(20);
        let hw = 20;
        data.push(hw as u8);
        data.push(hw as u8);
        data.push(21);
        data.push(21);
        data.push(23);
        data.push(23);
        data
    };
    k.c.reserve(g.len());
    for b in g.iter().rev() {
        k.c.push_front(*b);
    }
}

fn l(k: &mut a) {
    let mut g = {
        let mut data = Vec::with_capacity(30);
        let hw = 0b1000_10_00;
        data.push(hw as u8);
        data.push(hw as u8);
        let addr = [1, 2, 3, 4, 5, 6];
        data.extend_from_slice(&addr);
        data.extend_from_slice(&addr);
        data.extend_from_slice(&addr);
        data.push(55);
        data.push(55);
        data.push(hw as u8);
        data.push(hw as u8);
        data
    };
    k.c.reserve(g.len());
    for b in g.iter().rev() {
        k.c.push_front(*b);
    }
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };
    j(&mut k);
    l(&mut k);
}
