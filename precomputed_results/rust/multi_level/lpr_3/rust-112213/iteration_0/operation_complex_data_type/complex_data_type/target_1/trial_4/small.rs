#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut l: usize = 0;
static mut aa: [usize; 6] = [0; 6];
static mut m: [usize; 6] = [0; 6];
static mut ab: [isize; 2] = [13, 13];
static mut n: *mut isize = 0 as *mut isize;
static mut z: [isize; 7] = [0; 7];
static mut i: usize = 0;
static mut j: i32 = 0;
static mut k: u64 = 0;
static mut ah: isize = 0;
static mut ae: usize = 0;
static mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (std::ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0.0, 0, 0), [0.0], (0, 0), 0, (0, 0), [0.0]), std::ptr::null());
static mut u: ((f64, i64, i8),) = ((0.0, 0, 0),);
static mut ag: *mut isize = 0 as *mut isize;

static unsafe fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
    g.hash(&mut a);
}

static unsafe fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    af = n;
    ah = -9223372036854775808;
    ae = 0;
    t.0 = std::ptr::addr_of!(t.1 .0);
    t.4 .0 = (std::f64::NAN, 1102345069964335552, 9);
    b(0, 0, n, 0);
    u.0 = t.4 .0;
    match u.0 .2 {
        9 => {
            b(af, ae, ah, s);
            b(z, p, n, r);
            return;
        }
        v => {
            *ag = 88;
        }
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let mut l = 1;
    let mut aa = [0; 6];
    let mut m = [0; 6];
    let mut ab = [13; 2];
    let mut n = {
        let mut ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        q.hash(&mut a);
        ae.hash(&mut a);
        &mut ae.3
    };
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729));
    println!("hash: {}", a.finish());
}