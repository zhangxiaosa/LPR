use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::with_capacity(18);
            temp.push_front(0);
            temp
        },
    };
    k.c.reserve(20);
    println!();
    let mut iter = &[0xAA].iter();
    while let Some(elem) = iter.next() {
        k.c.push_back(*elem);
    }
}