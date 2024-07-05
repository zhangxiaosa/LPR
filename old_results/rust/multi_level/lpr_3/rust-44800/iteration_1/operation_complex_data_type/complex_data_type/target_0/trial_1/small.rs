use std::collections::VecDeque;

fn main() {
    let mut k: VecDeque<u8> = VecDeque::with_capacity(32);
    k.push_front(0);
    k.push_front(1);
    k.push_front(1);
    k.push_front(2);
    k.push_front(3);
    k.push_front(4);
    k.push_front(5);
    k.push_front(6);
    k.push_front(1);
    k.push_front(2);
    k.push_front(3);
    k.push_front(4);
    k.reserve_exact(20);
    println!();
    k.extend(&[0xD9]);

    let k_0 = k.pop_front().unwrap();
    let k_1 = k.pop_front().unwrap();
    let k_2 = k.pop_front().unwrap();
    let k_3 = k.pop_front().unwrap();
    let k_4 = k.pop_front().unwrap();
    let k_5 = k.pop_front().unwrap();
    let k_6 = k.pop_front().unwrap();
    let k_7 = k.pop_front().unwrap();
    let k_8 = k.pop_front().unwrap();
    let k_9 = k.pop_front().unwrap();
    let k_10 = k.pop_front().unwrap();
    let k_11 = k.pop_front().unwrap();
    let k_12 = k.pop_front().unwrap();
    let k_13 = k.pop_front().unwrap();
    let k_14 = k.pop_front().unwrap();
    let k_15 = k.pop_front().unwrap();
    let k_16 = k.pop_front().unwrap();
    let k_17 = k.pop_front().unwrap();
    let k_18 = k.pop_front().unwrap();
    let k_19 = k.pop_front().unwrap();
}