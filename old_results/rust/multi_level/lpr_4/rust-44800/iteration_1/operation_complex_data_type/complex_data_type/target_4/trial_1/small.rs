use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(32),
    };
    let mut g_data = Vec::with_capacity(20);
    g_data.push(0x45);
    g_data.push(20);
    g_data.push(20);
    g_data.push(20);
    g_data.push(21);
    g_data.push(21);
    let mut iter = Iterator::cloned(g_data.iter());
    while let Some(b1) = Iterator::next(&mut iter) {
        k.c.push_front(b1);
        k.c.push_front(b1);
    }
    let hw_1: u8 = 0b1000_10_00;
    let addr0: u8 = 1;
    let addr1: u8 = 2;
    let addr2: u8 = 3;
    let addr3: u8 = 4;
    let addr4: u8 = 5;
    let addr5: u8 = 6;
    let mut g_1_data = Vec::with_capacity(20 + (6 * 3));
    g_1_data.resize(2, hw_1);
    g_1_data.push(addr0);
    g_1_data.push(addr1);
    g_1_data.push(addr2);
    g_1_data.push(addr3);
    g_1_data.push(addr4);
    g_1_data.push(addr5);
    g_1_data.push(addr0);
    g_1_data.push(addr1);
    g_1_data.push(addr2);
    g_1_data.push(addr3);
    g_1_data.push(addr4);
    g_1_data.push(addr5);
    g_1_data.push(addr0);
    g_1_data.push(addr1);
    g_1_data.push(addr2);
    g_1_data.push(addr3);
    g_1_data.push(addr4);
    g_1_data.push(addr5);
    k.c.reserve_exact(g_1_data.len());
    let fcs0: u8 = 0xD9;
    let fcs: [u8; 1] = [fcs0];
    println!();
    k.c.push_front(fcs[0]);
}