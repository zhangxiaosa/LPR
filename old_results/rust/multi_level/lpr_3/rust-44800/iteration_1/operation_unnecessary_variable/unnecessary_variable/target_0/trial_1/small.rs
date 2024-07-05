use std::collections::VecDeque;

fn main() {
    let mut k = VecDeque::with_capacity(32);
    let k_0 = 0;
    let k_1 = 1;
    let k_2 = 1;
    let k_3 = 2;
    let k_4 = 3;
    let k_5 = 4;
    let k_6 = 5;
    let k_7 = 6;
    let k_8 = 1;
    let k_9 = 2;
    let k_10 = 3;
    let k_11 = 4;

    k.push_front(k_0);
    k.push_front(k_1);
    k.push_front(k_2);
    k.push_front(k_3);
    k.push_front(k_4);
    k.push_front(k_5);
    k.push_front(k_6);
    k.push_front(k_7);
    k.push_front(k_8);
    k.push_front(k_9);
    k.push_front(k_10);
    k.push_front(k_11);

    k.reserve_exact(20);

    println!();
}