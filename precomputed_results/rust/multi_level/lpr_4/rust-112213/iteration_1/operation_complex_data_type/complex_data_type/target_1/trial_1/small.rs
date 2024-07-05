#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a: DefaultHasher = DefaultHasher::new();
    let ae_0: isize = 0;
    let ae_1: isize = 0;
    let ae_2: [isize; 1] = [0];
    let ae_3: isize = 0;
    let ae_4: (&usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), &u8) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut af: [isize; 7] = [0; 7];
    let ah: isize = -9_223_372_036_854_775_808;
    let ae: isize = 0;
    let mut t = ae_4;
    
    loop {
        af = n;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552, 9);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let aa: [isize; 1] = [0];
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ae: (isize, isize, [isize; 1], isize) = (0, 0, [0], 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    // Remaining code is kept as it is.
}