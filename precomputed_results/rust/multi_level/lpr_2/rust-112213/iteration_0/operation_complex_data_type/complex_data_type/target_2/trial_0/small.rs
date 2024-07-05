#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(f: usize, x: usize, y: usize, g: usize) {
    unsafe {
        a = a.wrapping_add(f);
        a = a.wrapping_add(x);
        a = a.wrapping_add(y);
        a = a.wrapping_add(g);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab: [isize; 2] = [13, 13];
    let n: *mut isize = ptr::null_mut();
    o(ab, z, i, z, z, j, n);
    b(j as usize, k as usize, 0, 0);
    b([112; 6][0] as usize, l as usize, 0, 4);
    b(0, 0, m[0], aa[0]);
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut usize) {
    let mut t: (*const usize, (usize, i8), (char, i32, (isize,), u64), char, ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,)), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut u: ((f64, isize, i8),) = ((0., 0, 0),);
    loop {
        af = n;
        let ah: isize = -9223372036854775808;
        let ae: isize = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552, 9_i8);
        b(0, 0, n[0] as usize, 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af[0] as usize, ae as usize, ah, s);
                b(z[0] as usize, p[0] as usize, n[0] as usize, r);
                return;
            }
            v => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729));
    unsafe {
        println!("hash: {}", a);
    }
}