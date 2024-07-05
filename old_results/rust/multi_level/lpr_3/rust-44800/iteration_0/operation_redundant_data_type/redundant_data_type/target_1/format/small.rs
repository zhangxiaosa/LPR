use std::collections::VecDeque;

type d = Vec<u8>;

fn main() {
    let mut k: VecDeque<u8> = {
        let c = {
            let mut buf = VecDeque::new();
            buf.reserve_exact(32);
            buf
        };
        c
    };
    let hw = 0b1000_10_00;
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
    k.push_front(hw);
    k.push_front(hw);
    k.reserve_exact(20);
    let fcs = [0xD9];
    println!();
    k.extend(&fcs);
}
