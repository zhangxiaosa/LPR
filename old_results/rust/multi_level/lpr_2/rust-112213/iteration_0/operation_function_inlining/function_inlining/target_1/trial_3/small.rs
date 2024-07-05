#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        f.hash(&mut static mut a);
        x.hash(&mut static mut a);
        y.hash(&mut static mut a);
        g.hash(&mut static mut a);
        ptr::addr_of_mut!(ae.3)
    };
    o(ab, z, i, z, z, j, n);
    j.hash(&mut static mut a);
    k.hash(&mut static mut a);
    [112; 6].hash(&mut static mut a);
    l.hash(&mut static mut a);
    ().hash(&mut static mut a);
    ().hash(&mut static mut a);
    m.hash(&mut static mut a);
    aa.hash(&mut static mut a);
    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        af.hash(&mut static mut a);
        ae.hash(&mut static mut a);
        t.4 .0.hash(&mut static mut a);
        n.hash(&mut static mut a);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                af.hash(&mut static mut a);
                ae.hash(&mut static mut a);
                ah.hash(&mut static mut a);
                s.hash(&mut static mut a);
                z.hash(&mut static mut a);
                p.hash(&mut static mut a);
                r.hash(&mut static mut a);
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
