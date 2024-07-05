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
    let slice = &[0xAA];
    let len = slice.len();
    let dst = k.c.make_contiguous().get_unchecked_mut(k.c.len()..(k.c.len() + len));
    unsafe { std::ptr::copy_nonoverlapping(slice.as_ptr(), dst.as_mut_ptr(), len); }
    k.c.set_len(k.c.len() + len);
    println!();
}