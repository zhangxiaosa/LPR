use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

impl a {
    fn h(&mut self, data: &[u8]) {
        self.c.extend(data);
    }
}

impl d {
    fn with_capacity(capacity: usize) -> Self {
        let data = Vec::with_capacity(capacity);
        d { data }
    }
}

fn main() {
    let mut k = a { c: VecDeque::with_capacity(32) };

    let mut g = {
        let mut data = VecDeque::with_capacity(20);
        data.push_front(23);
        data.push_front(23);
        data.push_front(21);
        data.push_front(21);
        data.push_front(hw as u8);
        data.push_front(hw as u8);
        data.push_front(hw as u8);
        data.push_front(20);
        data.push_front(0x45);
        data
    };
    k.c.append(&mut g);

    let mut g = {
        let mut data = VecDeque::with_capacity(30);
        g.push_front(hw as u8);
        g.push_front(hw as u8);
        for &b in addr.iter() {
            g.push_front(b);
        }
        g.push_front(55);
        g.push_front(55);
        g
    };
    k.c.append(&mut g);

    let fcs = [0xD9];
    k.c.extend(&fcs);
}
