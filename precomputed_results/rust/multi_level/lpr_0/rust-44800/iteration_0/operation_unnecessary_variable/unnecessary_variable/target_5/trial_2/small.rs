use std::collections::VecDeque;

fn main() {
    let mut data = Vec::with_capacity(20);
    data.push(0b1000_10_00);
    data.extend_from_slice(&[1, 2, 3, 4, 5, 6]);
    data.push(55);
    data.push(0b1000_10_00);

    let _ = VecDeque::<u8>::extend(&mut VecDeque::new(), &[0xAA]);
}