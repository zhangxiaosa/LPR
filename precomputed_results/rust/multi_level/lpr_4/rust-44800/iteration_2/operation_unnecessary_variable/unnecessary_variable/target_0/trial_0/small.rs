use std::collections::VecDeque;

fn main() {
    let fcs: [u8; 1] = [0xD9];
    println!();
    VecDeque::from(vec![
        0x45, 0x45, 20, 20, 20, 20, 20, 20,
        21, 21, 21, 21,
        0b1000_10_00, 0b1000_10_00, 1, 2, 3, 4, 5, 6,
        1, 2, 3, 4, 5, 6,
        1, 2, 3, 4, 5, 6,
    ]).extend(&fcs);
}