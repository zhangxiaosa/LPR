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
    let mut g = d { data: Vec::with_capacity(20) };
    g.data.push(0x45);
    g.data.push(20 as u8);
    g.m(20);
    g.data.push(21 as u8);
    g.data.push(21 as u8);
    g.data.push(23 as u8);
    g.data.push(23 as u8);
    for b in g.data.iter().rev() {
        k.c.push_back(*b);
    }
}

fn main() {
    let mut k = {
        let c = VecDeque::with_capacity(32);
        a { c }
    };
    j(&mut k);
}