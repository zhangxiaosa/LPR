#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: usize, x: u64, y: u8, g: i16) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);
    b(j as usize, k, 0, 0);
    b(112, l, 0, 4);
    b(0, 0, m.len(), aa.len());
    return ab;
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(p.len(), p.len(), 0, 0);
    unsafe {
        q.3.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = &t.1 .0;
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        b(0, 0, n.len(), 0);

        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                b(af.len(), ae, ah as u8, s as i16);
                b(z[0] as usize, p[0] as u64, n.len(), r as u8);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729));
    unsafe {
        println!("hash: {}", a.finish());
    }
}