use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

fn l(k: &mut a) {
    let mut g = {
        let data = Vec::with_capacity(30);
        d { data }
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

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };
    {
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
        k.c.push_front(g.data[7]);
        k.c.push_front(g.data[6]);
        k.c.push_front(g.data[5]);
        k.c.push_front(g.data[4]);
        k.c.push_front(g.data[3]);
        k.c.push_front(g.data[2]);
        k.c.push_front(g.data[1]);
        k.c.push_front(g.data[0]);
    }
    l(&mut k);
}