use std::collections::VecDeque;
fn main() {
    let mut k = VecDeque::with_capacity(32);
    let hw = 0b1000_10_00;
    let addr: u8 = 1;
    k.push_front(3);
    k.push_front(2);
    k.push_front(1);
    k.push_front(0x45);
    k.push_front(hw);
    for _ in 0..2 {
        k.push_back(hw);
        k.push_back(addr);
    }
    for _ in 0..12 {
        k.push_back(addr);
    }
    k.push_back(55);
    k.push_back(hw);
    k.reserve_exact(32);
    println!();
    k.extend(&[0xD9]);
}