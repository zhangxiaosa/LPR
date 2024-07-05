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
    {
        let mut temp = VecDeque::with_capacity(20);
        temp.push_back(0xAA);
        k.c.extend(temp);
    }
    println!();
}