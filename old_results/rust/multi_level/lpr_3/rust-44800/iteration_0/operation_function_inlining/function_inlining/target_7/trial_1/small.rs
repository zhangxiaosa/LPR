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
}

fn main() {
    let mut k = a { c: VecDeque::with_capacity(32) };
    let mut g = d { data: Vec::with_capacity(20) };
    let b = 0x45;
    let hw = 20;
    let fcs = [0xD9];

    let g = d {
        data: vec![
            b, 20, hw as u8, hw as u8, 21, 21, 23, 23
        ]
    };

    k.c.extend(g.data.iter().rev());

    let g = d {
        data: vec![
            hw as u8, hw as u8, addr[0], addr[1], addr[2], addr[3], addr[4], addr[5], addr[0], addr[1], addr[2], addr[3], addr[4], addr[5], addr[0], addr[1], addr[2], addr[3], addr[4], addr[5], 55, 55, hw as u8, hw as u8
        ]
    };

    k.c.extend(g.data.iter().rev());

    k.c.extend(&fcs);
}