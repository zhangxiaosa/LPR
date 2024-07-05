use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: {
            let ___temp_vecdeque = VecDeque::new();
            ___temp_vecdeque.reserve_exact(18);
            ___temp_vecdeque
        },
    };
    k.c.extend_front(&[7]);
    k.c.extend_front(&[6]);
    k.c.extend_front(&[5]);
    k.c.extend_front(&[4]);
    k.c.extend_front(&[3]);
    k.c.extend_front(&[2]);
    k.c.extend_front(&[1]);
    k.c.extend_front(&[0]);
    let mut data = {
        let mut ___temp_vec = Vec::new();
        ___temp_vec.reserve_exact(20);
        ___temp_vec.extend_from_slice(&[0b1000_10_00, 1, 2, 3, 4, 5, 6]);
        ___temp_vec.push(55);
        ___temp_vec
    };
    k.c.reserve_exact(data.len());
    println!();
    k.c.extend(&[0xAA]);
}