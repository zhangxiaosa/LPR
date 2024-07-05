use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

impl d {
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
    {
        g.data.push(hw as u8);
        g.data.push(hw as u8);
    }
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);
    k.c.reserve(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }
    {
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
        {
            k.c.reserve(g.data.len());
            for b in g.data.iter() {
                k.c.push_front(*b);
            }
        }
        let fcs = [0xD9];
        k.c.extend(&fcs);
    }
}
