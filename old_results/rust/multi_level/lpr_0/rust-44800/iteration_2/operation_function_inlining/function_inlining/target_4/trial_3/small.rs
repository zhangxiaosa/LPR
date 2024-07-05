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
    k.c.reserve_exact(20);
    {
        use std::io::{self, Write};
        let stdout = io::stdout();
        let mut handle = stdout.lock();
        handle.write_all(b"\n").unwrap();
    }
    k.c.extend(&[0xAA]);
}
