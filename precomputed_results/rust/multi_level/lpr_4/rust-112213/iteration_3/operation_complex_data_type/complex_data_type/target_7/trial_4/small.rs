#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        let mut hasher = DefaultHasher::new();
        f.hash(&mut hasher);
        x.hash(&mut hasher);
        y.hash(&mut hasher);
        g.hash(&mut hasher);
        a = hasher.finish();
    }
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ae_0: isize = 0;
    let ae_1: isize = 0;
    let ae_2: [isize; 1] = [0];
    let ae_3: isize = 0;
    let mut ae: (isize, isize, [isize; 1], isize) = (ae_0, ae_1, ae_2, ae_3);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p[0], p[0], 0, 0);
    unsafe {
        let mut hasher = DefaultHasher::new();
        q.hash(&mut hasher);
        ae.hash(&mut hasher);
        let hash_result = hasher.finish();
        ae = (ae.0, ae.1, ae.2, hash_result as isize);
    }
    return &mut ae.3;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        (
            (0., 1_102_345_069_964_335_552, 9),
            [0.],
            (0, 0),
            0,
            (0, 0),
            [0.],
        ),
        ptr::null(),
    );
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n[0], 0);
        match t.4 .0 .2 {
            9 => {
                b(af[0], ae, -9_223_372_036_854_775_808_isize, 0);
                b(z, [56_isize; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(z_decomposed);
    o(
        [13; 2],
        z_decomposed,
        15609822513776909592,
        z_decomposed,
        z_decomposed,
        n,
    );
    b(652623562_i32 as u64, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b(0, 0, [0], [0]);
    return [13; 2];
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592, 652623562));
    unsafe {
        println!("hash: {}", a);
    }
}