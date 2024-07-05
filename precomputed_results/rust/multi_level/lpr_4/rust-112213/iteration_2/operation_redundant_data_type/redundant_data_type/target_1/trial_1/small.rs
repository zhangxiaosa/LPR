#![feature(const_hash)]

use std::hash::Hasher;
use std::ptr;

fn b<f: Hasher, w: Hasher, d: Hasher, e: Hasher>(f: f, x: w, y: d, g: e) {
    // No changes needed in the function body
}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(z);
    o([13; 2], z, 0_u64, z, z, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    b(p, p, 0, 0);
    unsafe {
        ae.3.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
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
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, ah, 0);
                return;
            }
            _ => unsafe {
                *ag = 88_u8;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h([56_isize; 7], 0_usize, 652623562_i32)
    );
}
