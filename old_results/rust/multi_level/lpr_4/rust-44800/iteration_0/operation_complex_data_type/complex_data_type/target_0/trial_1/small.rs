use std::collections::VecDeque;

let c = VecDeque::with_capacity(32);
let mut k_c = c;
let mut g_data = Vec::with_capacity(20);
let mut k = struct_a { c: k_c };
let mut g = struct_d { data: g_data };
let b: u8 = 0x45;
g.data.push(b);
g.data.push(20);
let hw: u8 = 20;
g.data.push(hw);
g.data.push(hw);
g.data.push(21);
g.data.push(21);
g.data.push(23);
let mut iter = g.data.iter().cloned();
while let Some(b1) = iter.next() {
    let b2 = iter.next().unwrap_or(b1);
    k.c.push_front(b1);
    k.c.push_front(b2);
}
let mut g1_data = Vec::with_capacity(30);
let mut g_1 = struct_d { data: g1_data };
let hw_1: u8 = 0b10001000;
g_1.data.push(hw_1);
g_1.data.push(hw_1);
let addr = [1, 2, 3, 4, 5, 6];
for &b in addr.iter() {
    g_1.data.push(b);
}
for &b in addr.iter() {
    g_1.data.push(b);
}
for &b in addr.iter() {
    g_1.data.push(b);
}
g_1.data.push(55);
g_1.data.push(55);
g_1.data.push(hw_1);
g_1.data.push(hw_1);
k.c.reserve_exact(g_1.data.len());
let fcs = [0xD9];
k.c.extend(&fcs);
println!();
