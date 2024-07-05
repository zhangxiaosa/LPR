#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
    unsafe {
        let mut a: u64 = 0;
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [i64; 7], i: usize, j: i32, k: u64) -> [i64; 2] {
    let l = 1;
    let aa: [i64; 6] = [0; 6];
    let m: [i64; 6] = [0; 6];
    let ab: [i64; 2] = [13; 2];
    let n: *mut isize;
    unsafe {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        let mut a: DefaultHasher = DefaultHasher::new();
        z.hash(&mut a);
        z.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);
        q.hash(&mut a);
        ae.hash(&mut a);
        n = ptr::addr_of_mut!(ae.3);
    }
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(z: [i64; 2], n: [i64; 7], r: usize, mut af: [i64; 7], p: [i64; 7], s: i32, _ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        let mut a: DefaultHasher = DefaultHasher::new();
        0.hash(&mut a);
        0.hash(&mut a);
        n.hash(&mut a);
        0.hash(&mut a);
        match t.4 .0 .2 {
            9 => {
                let mut a: DefaultHasher = DefaultHasher::new();
                af.hash(&mut a);
                ae.hash(&mut a);
                0.hash(&mut a);
                s.hash(&mut a);
                let mut a: DefaultHasher = DefaultHasher::new();
                z.hash(&mut a);
                p.hash(&mut a);
                n.hash(&mut a);
                r.hash(&mut a);
                return;
            }
            v => unsafe {
                *_ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h([
            56_i64; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64
        ])
    );
    unsafe {
        let a: DefaultHasher = DefaultHasher::new();
        println!("hash: {}", a.finish());
    }
}