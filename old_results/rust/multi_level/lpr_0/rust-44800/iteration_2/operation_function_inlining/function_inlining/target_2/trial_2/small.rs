use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::new();
            temp.push_front(0);
            temp
        },
    };
    k.c.reserve(20);
    println!();
    k.c.push_back(0xAA);
}