#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z0: isize, z1: isize, z2: isize, z3: isize, z4: isize, z5: isize, z6: isize, i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];

    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z0, z1, z2, z3, z4, z5, z6);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };

    o(ab, z0, z1, z2, z3, z4, z5, z6, i, z0, z1, z2, z3, z4, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(
    z0: isize,
    z1: isize,
    r: usize,
    mut af0: isize,
    mut af1: isize,
    mut af2: isize,
    mut af3: isize,
    mut af4: isize,
    mut af5: isize,
    mut af6: isize,
    p0: isize,
    p1: isize,
    p2: isize,
    p3: isize,
    p4: isize,
    p5: isize,
    p6: isize,
    s: i32,
    ag: *mut isize
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
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        af0 = z0;
        af1 = z1;
        af2 = z2;
        af3 = z3;
        af4 = z4;
        af5 = z5;
        af6 = z6;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, af0, af1, af2, af3, af4, af5, af6, 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af0, af1, ah, s);
                b(z0, z1, z2, z3, z4, p0, p1, p2, p3, p4, p5, p6, n, r);
                return;
            }
            v => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}