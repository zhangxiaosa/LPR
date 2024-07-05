use std::collections::VecDeque;
struct a {
    c: VecDeque<u8>,
}
struct d {
    data: Vec<u8>,
}
fn main() {
    let mut k = {
        let c = {
            let mut buf = VecDeque::new();
            buf.reserve_exact(32);
            buf
        };
        a { c }
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
    k.c.push_front(0);
    k.c.push_front(1);
    k.c.push_front(1);
    k.c.push_front(2);
    k.c.push_front(3);
    k.c.push_front(4);
    k.c.push_front(5);
    k.c.push_front(6);
    k.c.push_front(1);
    k.c.push_front(2);
    k.c.push_front(3);
    k.c.push_front(4);
    k.c.push_front(5);
    k.c.push_front(6);
    k.c.push_front(1);
    k.c.push_front(2);
    k.c.push_front(3);
    k.c.push_front(4);
    k.c.push_front(5);
    k.c.push_front(6);
    k.c.push_front(55);
    k.c.push_front(55);
    let hw = 0b1000_10_00;
    k.c.push_front(hw);
    k.c.push_front(hw);
    k.c.reserve_exact(g.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}
