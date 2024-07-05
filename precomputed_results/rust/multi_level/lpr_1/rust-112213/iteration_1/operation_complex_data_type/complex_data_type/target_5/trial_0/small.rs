#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z1: isize, z2: isize, z3: isize, z4: isize, z5: isize, z6: isize, z7: isize, i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n1 = z1;
    let n2 = z2;
    let n3 = z3;
    let n4 = z4;
    let n5 = z5;
    let n6 = z6;
    let n7 = z7;
    o([13, 13], [n1, n2, n3, n4, n5, n6, n7], i, [n1, n2, n3, n4, n5, n6, n7], [n1, n2, n3, n4, n5, n6, n7], j, ac_result);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(z1: isize, z2: isize, n1: isize, n2: isize, n3: isize, n4: isize, n5: isize, n6: isize, n7: isize, r: usize, af1: isize, af2: isize, af3: isize, af4: isize, af5: isize, af6: isize, af7: isize, p1: isize, p2: isize, p3: isize, p4: isize, p5: isize, p6: isize, p7: isize, s: i32, ag: *mut isize) {
    let mut t0: *const usize = ptr::null();
    let mut t1: usize = 0;
    let mut t2: u8 = 0;
    let mut t3: char = 'a';
    let mut t4: f64 = 0.0;
    let mut t5: i64 = 0;
    let mut t6: i8 = 0;
    let mut t7: usize = 0;
    let mut t8: u8 = 0;
    let mut t9: i8 = 0;
    let mut t10: isize = 0;
    let mut t11: i64 = 0;
    let mut t12: f32 = 0.0;
    let mut t13: *const u8 = ptr::null();
    let mut u0: f64 = 0.0;
    let mut u1: i64 = 0;
    let mut u2: i8 = 0;
    let mut v: [f32; 1] = [0.0];

    loop {
        let mut af = [n1, n2, n3, n4, n5, n6, n7];
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t0 = ptr::addr_of!(t1);
        t4 = f64::NAN;
        t5 = 1102345069964335552_i64;
        t6 = 9_i8;
        b(0, 0, [n1, n2, n3, n4, n5, n6, n7], 0);
        u0 = t4;
        u1 = t5;
        u2 = t6;
        match u2 {
            9 => {
                b(af1, af2, af3, af4, af5, af6, af7, ae, ah, s);
                b([13, 13], [n1, n2, n3, n4, n5, n6, n7], [n1, n2, n3, n4, n5, n6, n7], r);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    let ac_result;
    {
        let ad = [0; 3];
        let mut ae0 = 0;
        let mut ae1 = 0;
        let mut ae2 = 0;
        let mut ae3 = 0;
        let mut ae = (ae0, ae1, [ad[0], ad[1], ad[2]], ae3);
        let q0: u8 = 0;
        let q1: u128 = 0;
        let q2 = [ad[0], ad[1], ad[2]];
        let q3: isize = 0;
        let q4: i16 = 0;
        let q = (q0, q1, q2, q3, q4);
        b([56; 7], [56; 7], 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ac_result = ptr::addr_of_mut!(ae.3);
    }
    println!("{:?}", h(56, 56, 56, 56, 56, 56, 56, 15609822513776909592, 652623562, 18399139786288871729, ac_result));
    unsafe {
        println!("hash: {}", a.finish());
    }
}