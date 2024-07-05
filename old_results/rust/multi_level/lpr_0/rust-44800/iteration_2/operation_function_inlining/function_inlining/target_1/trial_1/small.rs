use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::with_capacity(19);
            temp.reserve(1);
            *temp.front_mut().unwrap() = 0;
            temp
        },
    };
    println!();
    k.c.push_back(0xAA);
}