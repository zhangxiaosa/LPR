#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<C: Hash, W: Hash, D: Hash, E: Hash>(mut f: C, mut x: W, mut y: D, mut g: E) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(mut z: [isize; 7], mut i: usize, mut j: i32, mut k: u64) -> [isize; 2] {
    let l: usize = 1;
    let aa = [0_isize; 6];
    let m = [0_isize; 6];
    let ab = [13_isize; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112_isize; 6], l, 0, 4_isize);
    b((), (), m, aa);
    return ab;
}

fn ac(mut p: [isize; 7]) -> *mut isize {
    let ad = [0_isize; 3];
    let mut ae = (0_isize, 0_isize, ad, 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(
    mut z: [isize; 2],
    mut n: [isize; 7],
    mut r: usize,
    mut af: [isize; 7],
    mut p: [isize; 7],
    mut s: i32,
    mut ag: *mut isize,
) {
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
        ((0.0, 0, 0_i8), [0.0], (0, 0), 0_i8, (0, 0), [0.0]),
        ptr::null(),
    );
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af = n;
        let ah: isize = -9223372036854775808;
        let ae: usize = 0;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        b(0, 0, n, 0);

        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
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
