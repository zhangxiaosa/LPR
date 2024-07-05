use std::collections::VecDeque;
struct d {
    data: Vec<u8>,
}
fn main() {
    let mut k = VecDeque::with_capacity(32);
    let mut g = d {
        data: Vec::with_capacity(20),
    };
    let b = 0x45;
    g.data.push(b);
    g.data.push(20);
    let hw = 0b1000_10_00;
    g.data.push(hw);
    g.data.push(hw);
    let addr = [1, 2, 3, 4, 5, 6];
    let b = 1;
    g.data.push(b);
    let b = 2;
    g.data.push(b);
    let b = 3;
    g.data.push(b);
    g.data.push(4);
    g.data.push(5);
    g.data.push(6);
    g.data.push(55);
    g.data.push(55);
    g.data.push(hw);
    g.data.push(hw);
    k.reserve(g.data.len());
    let fcs = [0xD9];
    k.extend(&fcs);
    println!();
}