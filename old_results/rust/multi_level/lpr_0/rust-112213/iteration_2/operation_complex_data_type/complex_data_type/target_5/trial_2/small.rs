#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa: [isize; 1] = [0];
    let ad: [isize; 3] = [0; 3];
    let mut ae: (usize, u8, [isize; 3], isize) = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(z, z, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    let n = ptr::addr_of_mut!(ae.3);

    o([13, 13], z, i, z, z, j, n);

    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13, 13];
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
    let mut t0: *const usize = ptr::null();
    let mut t1: (usize, u8) = (0, 0);
    let mut t2: (char, i32, (i64,), u64) = ('a', 0, (0,), 0);
    let mut t3: char = 'a';
    let mut t4: ((f64, i64, i8), f32, (usize, u8), i8, (isize, i64), f32) =
        ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0);
    let mut t5: *const u8 = ptr::null();

    loop {
        af = n;
        let ae = 0;
        t0 = ptr::addr_of!(t1.0);
        t4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        match t4.0.2 {
            9 => {
                b(af, ae, 0, s);
                b(z, p, n, r);
                return;
            }
            _v => unsafe {
                *_ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}