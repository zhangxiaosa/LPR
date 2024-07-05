use std::collections::VecDeque;

struct d {
    data: Vec<u8>,
}

fn main() {
    let mut k = VecDeque::<u8>::with_capacity(20);
    let mut data = Vec::<u8>::with_capacity(20);
    let b = 0x45;
    data.push(b);
    data.push(20);
    let hw = 0b1000_10_00;
    data.push(hw);
    data.push(hw);
    for &b in data.iter().rev() {
        k.push_front(b);
    }
    data.push(hw);
    data.push(hw);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        data.push(b);
    }
    for &b in addr.iter() {
        data.push(b);
    }
    for &b in addr.iter() {
        data.push(b);
    }
    data.push(55);
    data.push(55);
    data.push(hw);
    data.push(hw);
    k.reserve(data.len());

    println!();

    k.extend(&data);
}