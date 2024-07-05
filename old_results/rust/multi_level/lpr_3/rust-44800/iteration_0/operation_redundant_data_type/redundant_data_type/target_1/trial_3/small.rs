use std::collections::VecDeque;

struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k: Vec<u8> = {
        let c = {
            let mut buf = Vec::new();
            buf.reserve_exact(32);
            buf
        };
        c
    };
    let g = {
        let data = {
            let mut buf = Vec::with_capacity(20);
            buf.push(0x45);
            buf.push(20);
            let hw = 20;
            buf.push(hw);
            buf.push(hw);
            buf.push(21);
            buf.push(21);
            buf.push(23);
            buf.push(23);
            buf
        };
        d { data }
    };
    k.push_front(0);
    k.push_front(1);
    k.push_front(1);
    k.push_front(2);
    k.push_front(3);
    k.push_front(4);
    k.push_front(5);
    k.push_front(6);
    k.push_front(1);
    k.push_front(2);
    k.push_front(3);
    k.push_front(4);
    k.push_front(5);
    k.push_front(6);
    k.push_front(1);
    k.push_front(2);
    k.push_front(3);
    k.push_front(4);
    k.push_front(5);
    k.push_front(6);
    k.push_front(55);
    k.push_front(55);
    let hw = 0b1000_10_00;
    k.push_front(hw);
    k.push_front(hw);
    k.reserve_exact(g.data.len());
    let fcs = [0xD9];
    println!();
    k.extend(&fcs);
}
