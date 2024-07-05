#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [i64; 7], i: u64, j: i64, k: u128) -> [i64; 2] {
    let l: i64 = 1;
    let aa: [i64; 6] = [0; 6];
    let mut m: [i64; 6] = [0; 6];
    let ab: [i64; 2] = [13; 2];
    let n: &mut [i64; 3] = {
        let ad: [i64; 3] = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], i64, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        &mut ae.3
    };
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(
    z: [i64; 2],
    n: [i64; 7],
    r: u64,
    mut af: [i64; 7],
    p: [i64; 7],
    s: i64,
    _ag: *mut i64,
) {
    let mut t: ((usize, (usize, u8), (char, i64, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (i64, i64), [f32; 1]))), *const u8) = (
        (0, (0, 0_i8), ('a', 0, (0_i64,), 0_u64), 'a', ((0_f64, 0_i64, 0_i8), [0_f32; 1], (0_usize, 0_u8), 0_i8, (0_i64, 0_i64), [0_f32; 1]))),
        ptr::null(),
    );
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, 0, s);
                b(z, p, n, r);
                return;
            }
            v => unsafe {
                *_ag = 88_i64;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56_i64; 7],
            15609822513776909592_u64,
            652623562_i64,
            18399139786288871729_u128
        )
    );
    unsafe {
        println!("hash: {}", a);
    }
}
