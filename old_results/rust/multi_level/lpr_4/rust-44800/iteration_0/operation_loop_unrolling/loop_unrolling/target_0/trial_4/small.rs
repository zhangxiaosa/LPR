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
    g.data.push(b);
    g.data.push(20);
    let hw = 20;
    g.data.push(hw);
    g.data.push(hw);
    g.data.push(21);
    g.data.push(21);
    g.data.push(23);
    g.data.push(23);

    // Loop unrolling
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);
    g.data.push(addr[0]);
    g.data.push(addr[1]);
    g.data.push(addr[2]);
    g.data.push(addr[3]);
    g.data.push(addr[4]);
    g.data.push(addr[5]);

    g.data.push(55);
    g.data.push(55);
    let hw_1 = 0b1000_10_00;
    g.data.push(hw_1);
    g.data.push(hw_1);

    k.c.reserve_exact(g.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}