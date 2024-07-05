#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn main() {
    let n = ac([56_isize; 7]);

    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1])), *const u8) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );

    loop {
        let af = [56_isize; 7];
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);

        af = [56_isize; 7];
        b(0, 0, af, 0);

        match t.4 .0 .2 {
            9 => {
                unsafe {
                    *ag = 88_isize;
                }

                let z = [56_isize; 2];
                b(af, ae, -9_223_372_036_854_775_808_isize, 0);
                b(z, [56_isize; 7], af, r);

                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

unsafe fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
    g.hash(&mut a);
}

unsafe fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);

    q.hash(&mut a);
    ae.hash(&mut a);

    return ptr::addr_of_mut!(ae.3);
}