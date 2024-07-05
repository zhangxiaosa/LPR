#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a0: u64 = 0;
static mut a1: u64 = 0;
static mut a2: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        a0.hash(&mut a1);
        a2.hash(&mut a1);
        a0.hash(&mut a1);
        a2.hash(&mut a1);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac_result;
    o(ab, z, i, z, z, j, n);
    b(j as u64, k, 0, 0);
    b([112; 6].iter().map(|&x| x as u64).collect::<Vec<_>>()[0], l, 0, 4);
    b(0, 0, m.iter().map(|&x| x as u64).collect::<Vec<_>>()[0], aa.iter().map(|&x| x as u64).collect::<Vec<_>>()[0]);
    return ab.iter().map(|&x| x as isize).collect::<Vec<_>>().try_into().unwrap();
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    let mut u0: f64 = 0.0;
    let mut u1: i64 = 0;
    let mut u2: i8 = 0;

    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n.iter().map(|&x| x as u64).collect::<Vec<_>>()[0], 0);
        u0 = t.4 .0 .0;
        u1 = t.4 .0 .1;
        u2 = t.4 .0 .2;
        match u2 {
            9 => {
                b(af.iter().map(|&x| x as u64).collect::<Vec<_>>()[0], ae as u64, ah as u64, s as u64);
                b(z.iter().map(|&x| x as u64).collect::<Vec<_>>()[0], p.iter().map(|&x| x as u64).collect::<Vec<_>>()[0], n.iter().map(|&x| x as u64).collect::<Vec<_>>()[0], r as u64);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    let ac_result = {
        let ad = [0; 3];
        let mut ae0: isize = 0;
        let mut ae1: isize = 0;
        let mut ae2: [isize; 3] = [0; 3];
        let mut ae3: isize = 0;

        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b([56_isize; 7].iter().map(|&x| x as u64).collect::<Vec<_>>()[0], [56_isize; 7].iter().map(|&x| x as u64).collect::<Vec<_>>()[0], 0, 0);
        unsafe {
            q.2.iter().for_each(|&x| x.hash(&mut a1));
            ae0.hash(&mut a1);
            ae1.hash(&mut a1);
        }
        ptr::addr_of_mut!(ae2[0])
    };

    // ...
}
