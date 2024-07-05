#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l: isize = 1;
    let aa: [isize; 6] = [0; 6];
    let m: [isize; 6] = [0; 6];
    let ab: [isize; 2] = [13; 2];
    let n: *mut isize = {
        let ad: [isize; 3] = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, isize) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        &mut ae.3 as *mut isize
    };
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut usize,
) {
    let mut t: (*const usize, (usize, i8), (char, i32, (isize,), u64), char, ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut u: ((f64, isize, i8),) = Default::default();
    loop {
        af = n;
        let ah: isize = -9223372036854775808;
        let ae: isize = 0;
        t.0 = &t.1.0 as *const usize;
        t.4.0 = (f64::NAN, 1102345069964335552, 9_i8);
        b(0, 0, n, 0);
        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                return;
            }
            v => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h(
        [56; 7],
        15609822513776909592,
        652623562,
        18399139786288871729
    ));
    unsafe {
        println!("hash: {}", a.finish());
    }
}