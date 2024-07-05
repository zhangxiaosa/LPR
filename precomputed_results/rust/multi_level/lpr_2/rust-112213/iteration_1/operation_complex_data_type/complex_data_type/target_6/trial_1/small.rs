#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f0: [isize; 7], x0: [isize; 7], y0: isize, g0: isize) {
    unsafe {
        f0.hash(&mut a);
        x0.hash(&mut a);
        y0.hash(&mut a);
        g0.hash(&mut a);
    }
}

fn h(z0: isize, z1: isize, z2: isize, z3: isize, z4: isize, z5: isize, z6: isize, i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n0 = 0;
    let n1 = 0;
    let n2 = 0;
    let n3 = 0;
    let ae0 = 0;
    let ae1 = 0;
    let ae2 = 0;
    let ae3 = 0;
    let q0 = 0;
    let q1 = 0;
    let q2 = 0;
    let q3 = 0;
    let z = [z0, z1, z2, z3, z4, z5, z6];
    let n = [n0, n1, n2, n3];
    let ae = [ae0, ae1, ae2, ae3];
    let q = [q0, q1, q2, q3];
    b(z, z, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    let n = ptr::addr_of_mut!(ae.3);
    o([13, 13], z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112, 112, 112, 112, 112, 112], 1, 0, 4);
    b((), (), [0], aa);
    return [13, 13];
}

fn o(z0: isize, z1: isize, n0: isize, n1: isize, n2: isize, n3: isize, r: usize, mut af0: isize, mut af1: isize, mut af2: isize, mut af3: isize, mut af4: isize, mut af5: isize, mut af6: isize, p0: isize, p1: isize, p2: isize, p3: isize, p4: isize, p5: isize, p6: isize, s: i32, ag: *mut usize) {
    let mut t0: *const usize = ptr::null();
    let mut t1: (usize, i8) = (0, 0);
    let mut t2: (char, i32, (isize,), u64) = ('a', 0, (0,), 0);
    let mut t3: char = 'a';
    let mut t4: ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]) = ((f64::NAN, 1102345069964335552, 9), [0.0], (0, 0), 0, (0, 0), [0.0]);
    let mut t5: *const u8 = ptr::null();

    loop {
        af0 = n0;
        af1 = n1;
        af2 = n2;
        af3 = n3;
        af4 = n0;
        af5 = n1;
        af6 = n2;
        let ae = 0;
        t0 = ptr::addr_of!(t1.0);
        t4.0 = (f64::NAN, 1102345069964335552, 9);
        b(0, 0, n0, 0);
        match t4.0.2 {
            9 => {
                b(af0, ae, -9223372036854775808, s);
                b(z0, z1, n0, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            56, 56, 56, 56, 56, 56, 56,
            15609822513776909592,
            652623562,
            18399139786288871729
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}