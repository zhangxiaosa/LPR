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
        let c = &mut k.c;
        let required_capacity = 20;
        if c.capacity() < required_capacity {
            c.reserve_internal(required_capacity);
        }
    }
    println!();
    k.c.extend(&[0xAA]);
}