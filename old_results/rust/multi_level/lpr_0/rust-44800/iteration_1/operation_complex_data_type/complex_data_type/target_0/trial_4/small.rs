use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::with_capacity(18),
    };
    k.c.push_front(7);
    k.c.push_front(6);
    k.c.push_front(5);
    k.c.push_front(4);
    k.c.push_front(3);
    k.c.push_front(2);
    k.c.push_front(1);
    k.c.push_front(0);
    
    let mut data = Vec::with_capacity(20);
    let binary_value = 0b1000_10_00;
    let number_1 = 1;
    let number_2 = 2;
    let number_3 = 3;
    let number_4 = 4;
    let number_5 = 5;
    let number_6 = 6;
    let number_7 = 55;

    data.push(binary_value);
    data.push(number_1);
    data.push(number_2);
    data.push(number_3);
    data.push(number_4);
    data.push(number_5);
    data.push(number_6);
    data.push(number_7);
    
    k.c.reserve(data.len());
    println!();
    k.c.extend(&[0xAA]);
}