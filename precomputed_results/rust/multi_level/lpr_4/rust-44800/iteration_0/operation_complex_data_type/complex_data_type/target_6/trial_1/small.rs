use std::collections::VecDeque;

struct A {
    c: VecDeque<u8>,
}

struct D {
    data: Vec<u8>,
}

fn main() {
    let mut c = VecDeque::with_capacity(32);
    let mut k = A { c: VecDeque::new() };
    let mut g_data = Vec::with_capacity(20);
    let b: u8 = 0x45;
    g_data.push(b);
    g_data.push(20);
    let hw: u8 = 20;
    g_data.push(hw);
    g_data.push(hw);
    g_data.push(21);
    g_data.push(21);
    g_data.push(23);
    let mut iter = g_data.iter().cloned();
    while let Some(b1) = iter.next() {
        let b2 = iter.next().unwrap_or(b1);
        k.c.push_front(b1);
        k.c.push_front(b2);
    }
    let mut g_1_data = Vec::with_capacity(30);
    let hw_1: u8 = 0b1000_10_00;
    g_1_data.push(hw_1);
    g_1_data.push(hw_1);
    let addr = [1, 2, 3, 4, 5, 6];
    for &b in addr.iter() {
        g_1_data.push(b as u8);
    }
    for &b in addr.iter() {
        g_1_data.push(b as u8);
    }
    for &b in addr.iter() {
        g_1_data.push(b as u8);
    }
    g_1_data.push(55);
    g_1_data.push(55);
    g_1_data.push(hw_1);
    g_1_data.push(hw_1);
    k.c.reserve_exact(g_1_data.len());
    let fcs = [0xD9];
    k.c.extend(&fcs);
    println!();
}