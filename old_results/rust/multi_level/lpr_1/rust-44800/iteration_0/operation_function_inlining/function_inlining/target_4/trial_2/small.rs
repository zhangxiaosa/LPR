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

    fn m(&mut self, data: u16) {
        self.data.push(data as u8);
        self.data.push(data as u8);
    }
}

fn l(k: &mut a) {
    let mut g = d::with_capacity(30);
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

    let mut g_j_inline = d::with_capacity(20);
    let b_j_inline = 0x45;
    g_j_inline.data.push(b_j_inline);
    g_j_inline.data.push(20);
    let hw_j_inline = 20;
    g_j_inline.m(hw_j_inline);
    g_j_inline.m(21);
    g_j_inline.m(23);
    k.c.reserve_exact(g_j_inline.data.len());
    let iter_j_inline = g_j_inline.data.iter();
    let len_j_inline = g_j_inline.data.len();
    let mut index_j_inline = 0;
    while index_j_inline < len_j_inline {
        k.c.push_front(iter_j_inline[index_j_inline]);
        index_j_inline += 1;
    }

    l(&mut k);
}