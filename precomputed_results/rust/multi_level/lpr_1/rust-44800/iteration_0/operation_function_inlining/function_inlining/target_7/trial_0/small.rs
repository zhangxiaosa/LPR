use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

impl a {
    fn h(&mut self, data: &[u8]) {
        self.c.extend(data);
    }
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };

    let mut g = d { data: Vec::with_capacity(20) };
    let b = 0x45;
    k.c.push_front(b);
    k.c.push_front(20);
    let hw = 20;
    k.c.push_front(hw as u8);
    k.c.push_front(hw as u8);
    k.c.push_front(21);
    k.c.push_front(21);
    k.c.push_front(23);
    k.c.push_front(23);
    k.c.reserve(1);
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    let mut g = d { data: Vec::with_capacity(30) };
    let hw = 0b1000_10_00;
    k.c.push_front(hw as u8);
    k.c.push_front(hw as u8);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        k.c.push_front(b);
    }
    for &b in addr.iter() {
        k.c.push_front(b);
    }
    for &b in addr.iter() {
        k.c.push_front(b);
    }
    k.c.push_front(55);
    k.c.push_front(55);
    k.c.push_front(hw as u8);
    k.c.push_front(hw as u8);
    k.c.reserve(1);
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}