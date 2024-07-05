#![feature(const_hash)]

use std::hash::{ Hash, Hasher };
use std::ptr;

static mut a: u64 = 0;

fn b<f: Hash, x: Hash, y: Hash, g: Hash>(f: f, x: x, y: y, g: g) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z1: isize, z2: isize, z3: isize, z4: isize, z5: isize, z6: isize, z7: isize, i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa1 = 0;
    let aa2 = 0;
    let aa3 = 0;
    let aa4 = 0;
    let aa5 = 0;
    let aa6 = 0;
    let m1 = 0;
    let m2 = 0;
    let m3 = 0;
    let m4 = 0;
    let m5 = 0;
    let m6 = 0;
    let ab1 = 13;
    let ab2 = 13;
    let n1 = 0;
    let n2 = 0;
    let n3 = 0;
    let n4 = 0;
    let n5 = 0;
    let n6 = 0;
    let n7 = 0;
    let n8 = 0;
    let n9 = 0;
    let n10 = 0;
    let n11 = 0;
    let n12 = 0;
    let n13 = 0;
    let n14 = 0;
    let n15 = 0;
    let n16 = 0;
    let n17 = 0;
    let n18 = 0;
    let n19 = 0;
    let n20 = 0;
    let n21 = 0;
    let n22 = 0;
    let n23 = 0;
    let n24 = 0;
    let n25 = 0;
    let n26 = 0;
    let n27 = 0;
    let n28 = 0;
    let n = (&mut n25) as *mut _ as *mut isize;
    o([ab1, ab2], [z1, z2, z3, z4, z5, z6, z7], i, [z1, z2, z3, z4, z5, z6, z7], [z1, z2, z3, z4, z5, z6, z7], j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return [ab1, ab2];
}

fn o(z1: isize, z2: isize, n: isize, r: usize, mut af1: isize, mut af2: isize, mut af3: isize, mut af4: isize, mut af5: isize, mut af6: isize, mut af7: isize, p1: isize, p2: isize, p3: isize, p4: isize, p5: isize, p6: isize, p7: isize, s: i32, ag: *mut isize) {
    let mut t1: *const usize = std::ptr::null();
    let mut t2: usize = 0;
    let mut t3: char = 'a';
    let mut t4: char = 'a';
    let mut t5: f64 = f64::NAN;
    let mut t6: i64 = 1102345069964335552_i64;
    let mut t7: i8 = 9_i8;
    let mut t8: f32 = 0.;
    let mut t9: (usize, usize) = (0, 0);
    let mut t10: i8 = 0;
    let mut t11: isize = 0;
    let mut t12: i64 = 0;
    let mut t13: f32 = 0.;
    let mut u1: f64 = 0.;
    let mut u2: i64 = 0;
    let mut u3: i8 = 0;
    af1 = z1;
    af2 = z2;
    af3 = z3;
    af4 = z4;
    af5 = z5;
    af6 = z6;
    af7 = z7;
    let ah = -9223372036854775808_isize;
    let ae = 0;
    t1 = std::ptr::addr_of!(t2);
    t4 = 'a';
    t5 = f64::NAN;
    b(0, 0, n, 0);
    u1 = t5;
    match u3 {
        9 => {
            b(af1, af2, ah, s);
            b([z1, z2], [p1, p2, p3, p4, p5, p6, p7], n, r);
            return;
        }
        v => unsafe {
            *ag = 88_isize;
        },
    }
}

fn main() {
    println!("{:?}", h(56, 56, 56, 56, 56, 56, 56, 15609822513776909592, 652623562, 18399139786288871729));
    unsafe {
        println!("hash: {}", a);
    }
}