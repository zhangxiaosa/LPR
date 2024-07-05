use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: VecDeque::from(vec![0]),
    };
    k.c.reserve_exact(20);
    print!("\n");
    k.c.extend(&[0xAA]);
}