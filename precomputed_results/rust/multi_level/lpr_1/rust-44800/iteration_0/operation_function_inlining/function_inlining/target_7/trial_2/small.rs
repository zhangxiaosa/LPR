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
    let c = VecDeque::with_capacity(32);
    let mut k = a { c };

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

    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter().rev() {
        k.c.push_front(b);
    }
    for &b in addr.iter().rev() {
        k.c.push_front(b);
    }
    for &b in addr.iter().rev() {
        k.c.push_front(b);
    }
    k.c.push_front(55);
    k.c.push_front(55);
    k.c.push_front(0b1000_10_00);
    k.c.push_front(0b1000_10_00);

    let fcs = [0xD9];
    println!("\n");
    k.c.extend(&fcs);
}