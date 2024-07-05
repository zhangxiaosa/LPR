#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z0: isize, z1: isize, z2: isize, z3: isize, z4: isize, z5: isize, z6: isize, i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n0 = 0;
    let n1 = 0;
    let n2 = 0;
    let n3 = 0;
    let n4 = 0;
    let n5 = 0;
    let n6 = 0;
    let q = (0, 0, [0; 3], 0);
    b([z0, z1, z2, z3, z4, z5, z6], [z0, z1, z2, z3, z4, z5, z6], 0, 0);
    unsafe {
        q.hash(&mut a);
        (n0, n1, n2, n3, n4, n5, n6).hash(&mut a);
    }
    let n = ptr::addr_of_mut!(n6);
    o([13; 2], [z0, z1, z2, z3, z4, z5, z6], i, [z0, z1, z2, z3, z4, z5, z6], [z0, z1, z2, z3, z4, z5, z6], j, n);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13; 2];
}

fn o(z0: isize, z1: isize, n0: isize, n1: isize, n2: isize, n3: isize, n4: isize, n5: isize, n6: isize, r: usize, af0: isize, af1: isize, af2: isize, af3: isize, af4: isize, af5: isize, af6: isize, p0: isize, p1: isize, p2: isize, p3: isize, p4: isize, p5: isize, p6: isize, s: i32, ag: *mut usize) {
    let mut t0 = ptr::null();
    let mut t1 = (0, 0);
    let mut t2 = ('a', 0, (0,), 0);
    let mut t3 = 'a';
    let mut t4 = ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]);
    let mut t5 = ptr::null();
    loop {
        af0 = n0;
        af1 = n1;
        af2 = n2;
        af3 = n3;
        af4 = n4;
        af5 = n5;
        af6 = n6;
        let ae = 0;
        t0 = ptr::addr_of!(&t1.0);
        t4.0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
        b(0, 0, [n0, n1, n2, n3, n4, n5, n6], 0);
        match t4.0.2 {
            9 => {
                b([af0, af1, af2, af3, af4, af5, af6], ae, -9223372036854775808_isize, s);
                b([z0, z1], [p0, p1, p2, p3, p4, p5, p6], [n0, n1, n2, n3, n4, n5, n6], r);
                return;
            }
            _ => unsafe {
                *ag = 88_usize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            56_isize, 56_isize, 56_isize, 56_isize, 56_isize, 56_isize, 56_isize,
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}