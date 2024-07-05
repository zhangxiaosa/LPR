#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z1: isize, z2: isize, z3: isize, z4: isize, z5: isize, z6: isize, z7: isize, _: usize, _: i32) -> (isize, isize) {
    let n1 = z1;
    let n2 = z2;
    let n3 = z3;
    let n4 = z4;
    let n5 = z5;
    let n6 = z6;
    let n7 = z7;
    o([13; 2], [n1, n2, n3, n4, n5, n6, n7], 15609822513776909592, [n1, n2, n3, n4, n5, n6, n7], [n1, n2, n3, n4, n5, n6, n7], ptr::null_mut());
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return (13, 13);
}

fn ac(p1: isize, p2: isize, p3: isize, p4: isize, p5: isize, p6: isize, p7: isize) -> *mut isize {
    let mut ae1 = 0;
    let mut ae2 = 0;
    let mut ae3 = [0];
    let mut ae4 = 0;
    let ae: (*mut isize, *mut isize, *mut [isize; 1], *mut isize) = (&mut ae1, &mut ae2, &mut ae3, &mut ae4);
    let q1: u8 = 0;
    let q2: u128 = 0;
    let q3 = [0; 3];
    let q4: isize = 0;
    let q5: i16 = 0;
    b([p1, p2, p3, p4, p5, p6, p7], [p1, p2, p3, p4, p5, p6, p7], 0, 0);
    unsafe {
        (q1, q2, q3).hash(&mut a);
        (ae1, ae2, ae3, ae4).hash(&mut a);
    }
    return ae.3;
}

fn o(z1: isize, z2: isize, n1: isize, mut af1: isize, af2: isize, ag: *mut isize) {
    let mut t1: *const usize = ptr::null();
    let mut t2: (usize, u8) = (0, 0);
    let mut t3: (char, i32, (i64,), u64) = ('a', 0, (0,), 0);
    let mut t4: char = 'a';
    let mut t5: (f64, i64, i8) = (0., 0, 0);
    let mut t6: [f32; 1] = [0.];
    let mut t7: (usize, u8) = (0, 0);
    let mut t8: i8 = 0;
    let mut t9: (isize, i64) = (0, 0);
    let mut t10: [f32; 1] = [0.];
    let mut t11: *const u8 = ptr::null();

    loop {
        af1 = z2;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t1 = ptr::addr_of!(t2 .0);
        t5 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, [z1, z2, z3, z4, z5, z6, z7], 0);
        match t5 .2 {
            9 => {
                b(af1, ae, ah, 0);
                b([z1; 2], [56_isize; 7], [z1, z2, z3, z4, z5, z6, z7], n1);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(56, 56, 56, 56, 56, 56, 56, 15609822513776909592, 652623562)
    );
    unsafe {
        println!("hash: {}", a);
    }
}