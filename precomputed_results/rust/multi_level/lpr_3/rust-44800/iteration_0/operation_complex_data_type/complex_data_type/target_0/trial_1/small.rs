use std::collections::VecDeque;

fn main() {
    let mut k: VecDeque<u8> = {
        let c = {
            let mut buf = VecDeque::new();
            buf.reserve_exact(32);
            buf
        };
        c
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
    k.reserve_exact(20);

    let fcs = [0xD9];

    println!();

    k.extend(&fcs);
}