use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

impl a {
    // Removed function fn h(&mut self, data: &[u8])
}

impl d {
    fn with_capacity(capacity: usize) -> Self {
        let data = Vec::with_capacity(capacity);
        d { data }
    }
}

fn j(k: &mut a) {
    let mut g = {
        let capacity = 20;
        let mut data = Vec::with_capacity(capacity);
        data.push(b);
        data.push(20);
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
        let capacity = 30;
        let mut data = Vec::with_capacity(capacity);
        data.push(hw as u8);
        data.push(hw as u8);
        for &b in addr.iter() {
            data.push(b);
        }
        for &b in addr.iter() {
            data.push(b);
        }
        for &b in addr.iter() {
            data.push(b);
        }
        data.push(55);
        data
    };
    k.c.reserve(g.len());
    for b in g.iter().rev() {
        k.c.push_front(*b);
    }
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs); // Inlined k.h(&fcs)
}

fn main() {
    let mut k = {
        let c = VecDeque::with_capacity(32);
        a { c }
    };

    j(&mut k);
    l(&mut k);
}