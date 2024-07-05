use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

struct d {
    data: Vec<u8>,
}

impl d {
    fn with_capacity() -> Self {
        let data = {
            let mut v = Vec::<u8>::new();
            v.reserve_exact(20);
            v
        };
        d { data }
    }
}

fn main() {
    let mut k = {
        let c = {
            let mut v = VecDeque::new();
            v.reserve_exact(32);
            v
        };
        a { c }
    };

    let mut g = {
        let data = {
            let mut v = Vec::<u8>::new();
            v.reserve_exact(20);
            v
        };
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

    k.c.reserve_exact(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    let mut g = {
        let data = {
            let mut v = Vec::<u8>::new();
            v.reserve_exact(30);
            v
        };
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

    k.c.reserve_exact(g.data.len());
    for b in g.data.iter() {
        k.c.push_front(*b);
    }

    k.c.extend(&[0xD9]);
    println!("");
}