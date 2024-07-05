use std::collections::VecDeque;

struct A {
    c: VecDeque<u8>,
}

struct D {
    data: Vec<u8>,
}

impl A {
    fn h(&mut self, data: &[u8]) {
        self.c.extend(data);
    }
}

impl D {
    fn with_capacity(capacity: usize) -> Self {
        let data = Vec::with_capacity(capacity);
        D { data }
    }

    fn m(&mut self, data: u16) {
        self.data.push(data as u8);
        self.data.push(data as u8);
    }
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k_inline = A { c };

    // Inlined j
    let mut g_inline = D::with_capacity(20);
    let b = 0x45;
    g_inline.data.push(b);
    g_inline.data.push(20);
    let hw = 20;
    g_inline.m(hw);
    g_inline.m(21);
    g_inline.m(23);
    k_inline.c.reserve(g_inline.data.len());
    for b in g_inline.data.iter() {
        k_inline.c.push_front(*b);
    }

    let mut g = D::with_capacity(30);
    let hw = 0b1000_10_00;
    g.m(hw);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        g.data.push(b);
    }
    for &b in addr.iter() {
        g.data.push(b);
    }
    for &b in addr.iter() {
        g.data.push(b);
    }
    g.m(55);
    g.m(hw);
    k_inline.c.reserve(g.data.len());
    for b in g.data.iter() {
        k_inline.c.push_front(*b);
    }
    let fcs = [0xD9];
    k_inline.c.extend(&fcs);
}