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

    let reserve_count = 20;
    k.c.reserve_exact(reserve_count);

    let extend_elements = &[0xAA];
    k.c.extend(extend_elements);
}
