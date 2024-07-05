use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

fn main() {
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };

    let mut g = {
        let data = Vec::with_capacity(20);
        d { data }
    };
    let b = 0x45;
    k.c.push_front(b);
    k.c.push_front(20);
    let hw = 20;
    k.c.push_front(hw as u8);
    k.c.push_front(hw as u8);
    k.c.push_front(21);
    k.c.push_front(21);
    k.c.push_front(23);
    k.c.push_front(23);
    k.c.reserve(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    let mut g_1 = {
        let data = Vec::with_capacity(30);
        d { data }
    };
    let hw_1 = 0b1000_10_00;
    k.c.push_front(hw_1 as u8);
    k.c.push_front(hw_1 as u8);
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
    k.c.push_front(55);
    k.c.push_front(55);
    k.c.push_front(hw_1 as u8);
    k.c.push_front(hw_1 as u8);
    k.c.reserve(g_1.data.len());
    for b in g_1.data.iter() {
        k.c.push_front(*b);
    }

    let fcs = [0xD9];
    k.c.extend(&fcs);

}
