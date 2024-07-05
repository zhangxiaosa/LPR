#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        a ^= f;
        a ^= x;
        a ^= y;
        a ^= g;
    }
}

fn h(z_decomposed: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(z_decomposed);
    o([13, 13], z_decomposed, 15609822513776909592, z_decomposed, z_decomposed, n);
    b(652623562, 18399139786288871729, 0, 0);
    b([112, 112, 112, 112, 112, 112], 1, 0, 4);
    b(0, 0, 0, 0);
    return [13, 13];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = Box::new(0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p[0], p[1], 0, 0);
    unsafe {
        q.0 ^= a as u8;
        *(ae.as_mut()) = q.0 as isize;
    }
    Box::into_raw(ae)
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
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
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = n;
        let ae = Box::new(0_isize);
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n[0], 0);
        match t.4 .0 .2 {
            9 => {
                b(af[0], af[1], -9_223_372_036_854_775_808, 0);
                b(z[0], 56, n[0], r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562));
    println!("hash: {}", a);
}