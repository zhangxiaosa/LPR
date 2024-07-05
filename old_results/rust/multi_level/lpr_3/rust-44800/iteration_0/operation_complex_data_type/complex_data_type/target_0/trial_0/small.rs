use std::collections::VecDeque;

fn main() {
    let mut k: VecDeque<u8> = VecDeque::new();
    let mut buf: VecDeque<u8> = VecDeque::new();
    let mut c: VecDeque<u8> = VecDeque::new();
    let mut fcs: [u8; 1] = [0; 1];

    buf.reserve_exact(32);
    k = c.clone();
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
    k.reserve_exact(20);
    fcs = [0xD9];
    k.extend(&fcs);

    println!();
}