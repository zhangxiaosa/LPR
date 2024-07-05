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
    for b in g.data.iter() {
        k.c.push_front(*b);
    }
    let g = {
        let data = {
            let mut buf = Vec::with_capacity(30);
            let hw = 0b1000_10_00;
            buf.push(hw);
            buf.push(hw);
            let addr = [1, 2, 3, 4, 5, 6];
            for &b in addr.iter() {
                buf.push(b);
            }
            for &b in addr.iter() {
                buf.push(b);
            }
            for &b in addr.iter() {
                buf.push(b);
            }
            buf.push(55);
            buf.push(55);
            buf.push(hw);
            buf.push(hw);
            buf
        };
        d { data }
    };
    k.c.reserve_exact(g.data.len());
    let fcs = [0xD9];
    println!();
    k.c.extend(&fcs);
}
