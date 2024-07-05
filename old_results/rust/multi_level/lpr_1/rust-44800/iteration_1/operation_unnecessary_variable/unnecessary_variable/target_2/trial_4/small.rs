use std::collections::VecDeque;

fn main() {
    let mut k_c: VecDeque<u8> = [0, 1, 2, 3, 4, 5, 6, 7].iter().cloned().collect();
    let fcs: [u8; 1] = [0xD9];

    k_c.extend(&fcs);
}