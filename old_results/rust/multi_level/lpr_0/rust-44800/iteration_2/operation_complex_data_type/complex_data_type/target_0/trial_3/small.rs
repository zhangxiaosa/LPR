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
    let k_c_capacity = k.c.capacity();
    let k_c_values = k.c.into_iter().collect::<Vec<u8>>();
    let mut k_c = VecDeque::from(k_c_values);
    k_c.reserve_exact(20 - k_c_capacity);
    print!("\n");
    k_c.extend(&[0xAA]);
}