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

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l: isize = 1;
    let aa: [isize; 6] = [0; 6];
    let m: [isize; 6] = [0; 6];
    let ab: [isize; 2] = [13; 2];
    let n: *mut isize = {
        let ad: [isize; 3] = [0; 3];
        let mut ae: (u64, u64, [isize; 3], usize) = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z[0], z[1], 0, 0);
        unsafe {
            a = a.wrapping_add(q.1 as u64);
            a = a.wrapping_add(ae.0);
            a = a.wrapping_add(ae.1);
            a = a.wrapping_add(ae.3 as u64);
        }
        &mut ae.3
    };
    o(ab, z, i, z, z, j, n);
    b(j as u64, k, 0, 0);
    b(112, l as u64, 0, 4);
    b(0, 0, m[0], aa[0]);
    return ab;
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    _ag: *mut isize,
) {
    let mut t0: *const usize = std::ptr::null();
    let t1: (usize, u8) = (0, 0);
    let t2: (char, i32, (i64,), u64) = ('a', 0, (0,), 0);
    let t3: char = 'a';
    let t4: (
        (f64, i64, i8),
        [f32; 1],
        (usize, u8),
        i8,
        (isize, i64),
        [f32; 1],
    ) = (
        (std::f64::NAN, 1102345069964335552_i64, 9_i8),
        [0.],
        (0, 0),
        0,
        (0, 0),
        [0.],
    );
    loop {
        af = n;
        let ae: usize = 0;
        t0 = &t1 .0;
        t4 .0 = (std::f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n[0], 0);
        match t4 .0 .2 {
            9 => {
                b(af[0], ae as u64, 0, s as u64);
                b(z[0], p[0], n[0], r as u64);
                return;
            }
            _v => unsafe {
                *_ag = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64
    ));
    unsafe {
        println!("hash: {}", a);
    }
}