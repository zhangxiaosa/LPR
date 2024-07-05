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

    let data_element_0 = 0b1000_10_00;
    let data_element_1 = 1;
    let data_element_2 = 2;
    let data_element_3 = 3;
    let data_element_4 = 4;
    let data_element_5 = 5;
    let data_element_6 = 6;
    let data_element_7 = 55;

    let mut data = Vec::with_capacity(20);
    data.push(data_element_0);
    data.push(data_element_1);
    data.push(data_element_2);
    data.push(data_element_3);
    data.push(data_element_4);
    data.push(data_element_5);
    data.push(data_element_6);
    data.push(data_element_7);

    k.c.reserve(data.len());
    println!();
    k.c.extend(&[0xAA]);
}
