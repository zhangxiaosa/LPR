#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        a = a.wrapping_add(f);
        a = a.wrapping_add(x);
        a = a.wrapping_add(y);
        a = a.wrapping_add(g);
    }
}

fn h(z: [i64; 7], _: usize, _: i32) -> [i64; 2] {
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562, 18399139786288871729, 0, 0);
    b([112; 6], 1, 0, 4);
    b(0, 0, 0, 0);
    return [13; 2];
}

fn ac(p: [i64; 7]) -> *mut i64 {
    let mut ae = (0, 0, [0], 0);
    let q: (u8, u128, [u64; 3], i64, i16) = (0, 0, [0; 3], 0, 0);
    b(p[0], p[1], 0, 0);
    unsafe {
        a = a.wrapping_add(q.0 as u64);
        a = a.wrapping_add(q.1 as u64);
        ae.0.hash(&mut a);
        ae.1.hash(&mut a);
        ae.2.hash(&mut a);
        ae.3.hash(&mut a);
    }
    return &mut ae.3;
}

fn o(z: [i64; 2], n: [i64; 7], r: usize, mut af: [i64; 7], _: [i64; 7], ag: *mut i64) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552, 9);
        b(0, 0, n[0], 0);
        match t.4 .0 .2 {
            9 => {
                b(af[0], ae, ah, 0);
                b(z[0], 56, n, r);
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
    unsafe {
        println!("hash: {{}}", a);
    }
}