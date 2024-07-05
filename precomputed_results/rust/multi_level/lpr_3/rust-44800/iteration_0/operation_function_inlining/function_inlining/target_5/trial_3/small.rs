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

fn main() {
    let mut k = {
        let c = VecDeque::with_capacity(32);
        a { c }
    };
    let mut g = {
        let data = Vec::with_capacity(20);
        d { data }
    };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 20;
    g.data.push(hw as u8);
    g.data.push(hw as u8);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);
    k.c.reserve(g.data.len());
    k.c.push_front(g.data[0]);
    k.c.push_front(g.data[1]);
    k.c.push_front(g.data[2]);
    k.c.push_front(g.data[3]);
    k.c.push_front(g.data[4]);
    k.c.push_front(g.data[5]);
    k.c.push_front(g.data[6]);
    k.c.push_front(g.data[7]);
    k.c.push_front(g.data[8]);
    k.c.push_front(g.data[9]);
    k.c.push_front(g.data[10]);
    k.c.push_front(g.data[11]);
    k.c.push_front(g.data[12]);
    k.c.push_front(g.data[13]);
    k.c.push_front(g.data[14]);
    k.c.push_front(g.data[15]);
    k.c.push_front(g.data[16]);
    k.c.push_front(g.data[17]);
    k.c.push_front(g.data[18]);
    k.c.push_front(g.data[19]);
    k.c.push_front(g.data[0]);
    k.c.push_front(g.data[1]);
    k.c.push_front(g.data[2]);
    k.c.push_front(g.data[3]);
    k.c.push_front(g.data[4]);
    k.c.push_front(g.data[5]);
    k.c.push_front(g.data[6]);
    k.c.push_front(g.data[7]);
    k.c.push_front(g.data[8]);
    k.c.push_front(g.data[9]);
    k.c.push_front(g.data[10]);
    k.c.push_front(g.data[11]);
    k.c.push_front(g.data[12]);
    k.c.push_front(g.data[13]);
    k.c.push_front(g.data[14]);
    k.c.push_front(g.data[15]);
    k.c.push_front(g.data[16]);
    k.c.push_front(g.data[17]);
    k.c.push_front(g.data[18]);
    k.c.push_front(g.data[19]);
    k.c.push_front(0xD9);
}