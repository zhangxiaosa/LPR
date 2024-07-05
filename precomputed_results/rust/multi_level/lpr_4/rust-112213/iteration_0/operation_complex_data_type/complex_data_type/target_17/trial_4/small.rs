//![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(mut f: f, mut x: w, mut y: d, mut g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(mut z0: isize, mut z1: isize, mut z2: isize, mut z3: isize, mut z4: isize, mut z5: isize, mut z6: isize, mut i: usize, mut j: i32, mut k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    // Decomposed variables for `z`
    let z_0 = z0;
    let z_1 = z1;
    let z_2 = z2;
    let z_3 = z3;
    let z_4 = z4;
    let z_5 = z5;
    let z_6 = z6;
  
    let n = ac(z_0, z_1, z_2, z_3, z_4, z_5, z_6);
    o(ab, z_0, z_1, z_2, z_3, z_4, z_5, z_6, i, z_0, z_1, z_2, z_3, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn ac(mut z0: isize, mut z1: isize, mut z2: isize, mut z3: isize, mut z4: isize, mut z5: isize, mut z6: isize) -> *mut isize {
    let ad = [0; 3];
    let mut ae = (0_isize, 0_isize, ad, 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(z0, z1, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(
    mut z0: isize,
    mut z1: isize,
    mut n0: isize,
    mut n1: isize,
    mut n2: isize,
    mut n3: isize,
    mut n4: isize,
    mut n5: isize,
    mut r: usize,
    mut af: isize,
    mut p0: isize,
    mut p1: isize,
    mut p2: isize,
    mut p3: isize,
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
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af = n2;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        b(0, 0, n0, n1);

        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s);
                b(z0, p0, n2, r);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            56_isize,
            56_isize,
            56_isize,
            56_isize,
            56_isize,
            56_isize,
            56_isize,
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}