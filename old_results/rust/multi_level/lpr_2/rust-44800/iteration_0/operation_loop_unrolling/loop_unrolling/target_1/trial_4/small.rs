use std::collections::VecDeque;

struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g = d {
        data: Vec::with_capacity(20),
    };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 0b1000_10_00;
    g.data.push(hw);
    g.data.push(hw);

    // Unroll the loop and manually push each element from `g.data` to the front of `k`
    k.push_front(g.data[19]);
    k.push_front(g.data[18]);
    k.push_front(g.data[17]);
    k.push_front(g.data[16]);
    k.push_front(g.data[15]);
    k.push_front(g.data[14]);
    k.push_front(g.data[13]);
    k.push_front(g.data[12]);
    k.push_front(g.data[11]);
    k.push_front(g.data[10]);
    k.push_front(g.data[9]);
    k.push_front(g.data[8]);
    k.push_front(g.data[7]);
    k.push_front(g.data[6]);
    k.push_front(g.data[5]);
    k.push_front(g.data[4]);
    k.push_front(g.data[3]);
    k.push_front(g.data[2]);
    k.push_front(g.data[1]);
    k.push_front(g.data[0]);

    g.data.push(hw);
    g.data.push(hw);
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
    g.data.push(hw);
    g.data.push(hw);
    k.reserve(g.data.len());
    let fcs = [0xD9];
    println!();
    k.extend(&fcs);
}
