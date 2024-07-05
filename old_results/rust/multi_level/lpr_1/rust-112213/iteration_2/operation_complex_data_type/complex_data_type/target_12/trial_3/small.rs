/// The modified program

#![feature(const_hash)]

use std::hash::{Hash, Hasher};
use std::ptr;

fn b<H: Hash>(value: H, hasher: &mut u64) {
    value.hash(hasher);
}

fn h(mut af: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let aa = [0; 6];
    let m = [0; 6];
    let mut ab = [0; 2];
    let n = ac_result;
    o(&mut ab, af, i, af, af, j, n);
    let mut hasher: u64 = 0;
    b(j, &mut hasher);
    b(k, &mut hasher);
    b(0, &mut hasher);
    b(0, &mut hasher);
    return ab;
}

fn o(
    z: &mut [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut isize,
) {
    let mut t0: *const usize = ptr::null();
    let t1: (usize, u8) = (0, 0);
    let t2: (char, i32, (i64,), u64) = ('a', 0, (0,), 0);
    let t3: char = 'a';
    let t4: (
        (f64, i64, i8),
        [f32; 1],
        (usize, u8),
        i8,
        (isize, i64),
        [f32; 1],
    ) = ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]);
    let t5: *const u8 = ptr::null();
    loop {
        af = p;
        let ae = 0;
        t0 = ptr::addr_of!(t1.0);
        t4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        let mut hasher: u64 = 0;
        b(0, &mut hasher);
        b(0, &mut hasher);
        b(n, &mut hasher);
        b(0, &mut hasher);
        match t4.0 .2 {
            9 => {
                b(af, &mut hasher);
                b(ae, &mut hasher);
                b(-9223372036854775808_isize, &mut hasher);
                b(s, &mut hasher);
                b(z, &mut hasher);
                b(p, &mut hasher);
                b(n, &mut hasher);
                b(r, &mut hasher);
                return;
            }
            _ => {
                unsafe {
                    *ag = 88_isize;
                }
            }
        }
    }
}

fn main() {
    let mut ae3 = 0;
    let q0: u8 = 0;
    let q1: u128 = 0;
    let q2 = [0; 3];
    let q3 = 0;
    let q4: i16 = 0;
    let ae2 = q2;
    let mut hasher: u64 = 0;
    b([56, 56, 56, 56, 56, 56, 56], &mut hasher);
    b([56, 56, 56, 56, 56, 56, 56], &mut hasher);
    b(0, &mut hasher);
    b(0, &mut hasher);
    q0.hash(&mut hasher);
    ae2.hash(&mut hasher);
    q1.hash(&mut hasher);
    q2.hash(&mut hasher);
    q3.hash(&mut hasher);
    q4.hash(&mut hasher);
    let ac_result = &mut ae3 as *mut isize;
    println!(
        "{:?}",
        h(
            [56, 56, 56, 56, 56, 56, 56],
            15609822513776909592,
            652623562,
            18399139786288871729,
            ac_result
        )
    );
    unsafe {
        println!("hash: {}", hasher);
    }
}