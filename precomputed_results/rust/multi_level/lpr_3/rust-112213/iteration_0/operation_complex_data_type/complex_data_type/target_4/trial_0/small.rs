#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<T1: Hash, T2: Hash, T3: Hash, T4: Hash>(f: T1, x: T2, y: T3, g: T4) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: isize, i: usize, j: i32, k: u64) -> isize {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn o(z: isize, n: isize, r: usize, af: isize, p: isize, s: i32, ag: *mut isize) {
    let mut t_0: usize = ptr::null();
    let mut t_1: (usize, u8) = (0, 0);
    let mut t_2: (char, i32, i64, u64) = ('a', 0, 0, 0);
    let mut t_3: char = 'a';
    let mut t_4: (f64, i64, i8) = (0., 0, 0);
    let mut t_5: f32 = [0.][0];
    let mut t_6: (usize, u8) = (0, 0);
    let mut t_7: i8 = 0;
    let mut t_8: (isize, i64) = (0, 0);
    let mut t_9: f32 = [0.][0];
    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t_0 = ptr::addr_of!(t_1 .0);
        t_4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        u.0 = t_4 .0;
        match u.0 .2 {
            9 => {
                b(af, ae, ah, s);
                b(z, p, n, r);
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
            56_isize,
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}