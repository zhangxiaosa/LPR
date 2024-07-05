#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<M: Hash, N: Hash, O: Hash>(f: M, x: N, y: O) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
    }
}

fn o([z; 2]: [isize; 2], mut af: [isize; 7], _: *mut isize) {
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, i64, i8),
            [f32; 1],
            (usize, u8),
            i8,
            (isize, i64),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        (
            (0., 1_102_345_069_964_335_552, 9),
            [0.],
            (0, 0),
            0,
            (0, 0),
            [0.],
        ),
        ptr::null(),
    );
    
    loop {
        af = [z; 7];
        t.0 = ptr::addr_of!(t.1 .0);
        b(0, 0, af);
        
        match t.4 .0 .2 {
            9 => {
                b(af, 0, -9_223_372_036_854_775_808_isize);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ptr::null_mut();
    o([13; 2], z_decomposed, n);
    [56_isize; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
}
