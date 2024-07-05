use std::collections::VecDeque;

fn main() {
    let mut c = VecDeque::with_capacity(32);
    c.push_front(0x45);
    c.push_front(0x45);
    c.push_front(20);
    c.push_front(20);
    c.push_front(20);
    c.push_front(20);
    c.push_front(20);
    c.push_front(20);
    c.push_front(21);
    c.push_front(21);
    c.push_front(21);
    c.push_front(21);
    c.reserve_exact(
        [
            0b1000_10_00,
            0b1000_10_00,
            1,
            2,
            3,
            4,
            5,
            6,
            1,
            2,
            3,
            4,
            5,
            6,
            1,
            2,
            3,
            4,
            5,
            6
        ]
        .len(),
    );
    let fcs: [u8; 1] = [0xD9];
    println!();
    c.extend(&fcs);
}
