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

fn l(k: &mut a) {
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
    let fcs = [0xD9];
    k.c.extend(&fcs);
}

fn main() {
    let mut k = {
        let c = VecDeque::with_capacity(32);
        a { c }
    };
    let mut g = d::with_capacity(20);
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 20;
    g.m(hw);
    g.m(21);
    g.m(23);
    for b in g.data.iter().rev() {
        k.c.push_back(*b);
    }
    l(&mut k);
}