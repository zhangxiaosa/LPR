use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::with_capacity(18);
            temp.push_front(0);
            temp.push_front(1);
            temp.push_front(2);
            temp.push_front(3);
            temp.push_front(4);
            temp.push_front(5);
            temp.push_front(6);
            temp.push_front(7);
            temp
        },
    };

    k.c.reserve(20);
    println!();
    k.c.extend(&[0xAA]);
}
