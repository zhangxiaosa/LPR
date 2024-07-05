#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: i64 = 0;

fn b<c: i64, w: i64, d: i64, e: i64>(f: c, x: w, y: d, g: e) {
    unsafe {
        let mut hasher = a as DefaultHasher;
        f.hash(&mut hasher);
        x.hash(&mut hasher);
        y.hash(&mut hasher);
        g.hash(&mut hasher);
        a = hasher.finish() as i64;
    }
}

fn h(z: [i64; 7], i: i64, j: i64, k: i64) -> [i64; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], i64, i64) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        unsafe {
            let mut hasher = a as DefaultHasher;
            q.hash(&mut hasher);
            ae.hash(&mut hasher);
            a = hasher.finish() as i64;
        }
        ptr::addr_of_mut!(ae.3)
    };

    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b(0, 0, m, aa);
    return ab;
}

fn o(
    z: [i64; 2],
    n: [i64; 7],
    r: i64,
    mut af: [i64; 7],
    p: [i64; 7],
    s: i64,
    ag: *mut i64,
) {
    let mut t: (
        *const i64,
        (i64, i64),
        (i64, i64, (i64,), i64),
        i64,
        (
            (f32, i64, i64),
            [f32; 1],
            (i64, i64),
            i64,
            (i64, i64),
            [f32; 1],
        ),
        *const i64,
    ) = (
        ptr::null(),
        (0, 0),
        (0, 0, (0,), 0),
        0,
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );

    let mut u: ((f32, i64, i64),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_i64;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f32::NAN, 1102345069964335552_i64, 9_i64);
        b(0, 0, n, 0);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
                return;
            }
            v => unsafe {
                *ag = 88_i64;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56_i64; 7],
            15609822513776909592_i64,
            652623562_i64,
            18399139786288871729_i64
        )
    );

    unsafe {
        println!("hash: {}", a);
    }
}
