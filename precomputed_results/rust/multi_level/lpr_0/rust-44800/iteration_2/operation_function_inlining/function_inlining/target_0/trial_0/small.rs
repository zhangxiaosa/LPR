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

    // Inlined function:
    let slice = &[0xAA];
    let len = slice.len();
    let iter = slice.iter().copied();

    unsafe {
        let vec = std::slice::from_raw_parts_mut(k.c.as_mut_ptr().add(k.c.len()), k.c.capacity() - k.c.len());
        for (i, elt) in iter.enumerate().take(len) {
            std::ptr::write(vec.get_unchecked_mut(i), elt);
        }
        k.c.set_len(k.c.len() + len);
    }
}