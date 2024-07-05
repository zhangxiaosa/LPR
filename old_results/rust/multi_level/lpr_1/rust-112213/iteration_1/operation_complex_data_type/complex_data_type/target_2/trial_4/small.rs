//![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: u64 = 0;
fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}
fn h(z0: isize, z1: isize, i: usize, j: i32, k: u64, ac_result: isize) -> [isize; 2] {
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n0 = z0;
    let n1 = z1;
    o([13, 13], [z0, z1, z0, z0, z0, z0, z1], i, [z0, z1, z0, z0, z0, z0, z1], [z0, z1, z0, z0, z0, z0, z1], j, &ac_result);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), m, aa);
    return ab;
}
fn o(z0: isize, z1: isize, n0: isize, n1: isize, n2: isize, n3: isize, n4: isize, n5: isize, r: usize, af0: isize, af1: isize, af2: isize, af3: isize, af4: isize, af5: isize, af6: isize, p0: isize, p1: isize, p2: isize, p3: isize, p4: isize, p5: isize, p6: isize, s: i32, ag: isize) {
    let mut t0: *const usize = ptr::null();
    let mut t1: usize = 0;
    let mut t2: char = 'a';
    let mut t3: i32 = 0;
    let mut t4: i64 = 0;
    let mut t5: u64 = 0;
    let mut t6: f64 = 0.0;
    let mut t7: i64 = 0;
    let mut t8: i8 = 0;
    let mut t9: f32 = 0.0;
    let mut t10: isize = 0;
    let mut t11: i64 = 0;
    let mut t12: u8 = 0;
    let mut u0: f64 = 0.0;
    let mut u1: i64 = 0;
    let mut u2: i8 = 0;
    let mut q0: u8 = 0;
    let mut q1: u128 = 0;
    let mut q2: [u64; 3] = [0; 3];
    let mut q3: isize = 0;
    let mut q4: i16 = 0;

    loop {
        af0 = n0;
        af1 = n1;
        af2 = n0;
        af3 = n0;
        af4 = n0;
        af5 = n0;
        af6 = n1;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t0 = ptr::addr_of!(t1);
        t4 = f64::NAN;
        t5 = 1102345069964335552_i64;
        t8 = 9_i8;
        b(0, 0, n0, 0);
        u0 = t4;
        u1 = t5;
        u2 = t8;
        match u2 {
            9 => {
                b(af0, ae, ah, s);
                b([13, 13], [z0, z1, z0, z0, z0, z0, z1], n1, r);
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
        let mut ae = (0, 0, ad, 0);
        let q0 = 0;
        let q1 = 0;
        let q2 = ad;
        let q3 = 0;
        let q4 = 0;
        b([56, 56, 56, 56, 56, 56, 56], [56, 56, 56, 56, 56, 56, 56], 0, 0);
        unsafe {
            q1.hash(&mut a);
            ae.hash(&mut a);
        }
        ac_result = ptr::addr_of_mut!(ae.3);
    }
    println!("{:?}", h(56, 56, 15609822513776909592, 652623562, 18399139786288871729, ac_result));
    unsafe {
        println!("hash: {}", a);
    }
}