use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

impl a {}

impl d {
    // fn with_capacity(capacity: usize) -> Self {
    //     let data = Vec::with_capacity(capacity);
    //     d { data }
    // }
}

fn main() {
    let mut k = {
        let c = VecDeque::with_capacity(32);
        a { c }
    };

    // Inlined function j
    let mut g = d {
        data: Vec::with_capacity(20),
    };

    let b = 0x45;
    g.data.push(b);
    g.data.push(20u8);
    g.data.push(20u8);
    g.data.push(20u8);
    g.data.push(20u8);
    g.data.push(21u8);
    g.data.push(21u8);
    g.data.push(23u8);
    g.data.push(23u8);

    k.c.reserve(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    // Original function l
    let mut g = d {
        data: Vec::with_capacity(30),
    };

    let hw = 0b1000_10_00;
    g.data.push(hw as u8);
    g.data.push(hw as u8);

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
    g.data.push(55);
    g.data.push(55);
    g.data.push(hw as u8);
    g.data.push(hw as u8);

    k.c.reserve(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}
