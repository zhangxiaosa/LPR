use std::collections::VecDeque;

struct a {
    c: VecDeque<u8>,
}

fn main() {
    let mut k = a {
        c: {
            let mut temp = VecDeque::with_capacity(18);
            {
                // Inlined code: temp.push_front(0);
                let buf = &mut temp.buf;
                buf.push_front(0);
                if temp.len == 0 {
                    temp.head = 0;
                }
                temp.len += 1;
            }
            temp
        },
    };
    k.c.reserve(20);
    println!();
    k.c.extend(&[0xAA]);
}