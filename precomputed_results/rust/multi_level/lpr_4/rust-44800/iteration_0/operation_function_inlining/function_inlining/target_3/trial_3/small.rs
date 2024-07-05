use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

impl d {
    fn with_capacity(capacity: usize) -> Self {
        let data = Vec::with_capacity(capacity);
        d { data }
    }

    fn m(&mut self, data: u16) {
        self.data.push(data as u8);
        self.data.push(data as u8);
    }
}

fn j(k: &mut a) {
    let mut g = d::with_capacity(20);
    let b = 0x45;
    k.c.push_front(b);
    k.c.push_front(20);
    let hw = 20;
    g.m(hw);
    g.m(21);
    g.m(23);
    k.c.reserve(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }
}

fn l(k: &mut a) {
    let mut g = d::with_capacity(30);
    let hw = 0b1000_10_00;
    g.m(hw);
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
    g.m(55);
    g.m(hw);
    k.c.reserve(g.data.len());
    for b in g.data.iter() {
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