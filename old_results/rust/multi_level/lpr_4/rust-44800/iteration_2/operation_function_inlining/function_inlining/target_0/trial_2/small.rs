use std::collections::VecDeque;

fn main() {
    let mut c = VecDeque::with_capacity(32);
    for _ in 0..6 {
        c.push_front(0x45);
        c.push_front(0x45);
    }
    let fcs: [u8; 1] = [0xD9];
    c.extend(&fcs);

    println!();
}
