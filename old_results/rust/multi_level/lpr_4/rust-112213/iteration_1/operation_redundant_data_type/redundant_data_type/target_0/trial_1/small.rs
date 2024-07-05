#![feature(const_hash)]

use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32));
    unsafe {
        println!("hash: {}", a.finish());
    }
}

fn b<f: Hash + std::fmt::Debug, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    unsafe {
        hash_value(&f);
        hash_value(&x);
        hash_value(&y);
        hash_value(&g);
    }
}

fn hash_value<T: std::fmt::Debug>(value: &T) {
    let ptr = value as *const T;
    let len = std::mem::size_of::<T>();
    unsafe {
        let mut hasher: u64 = 0;
        for i in 0..len {
            hasher ^= *((ptr as *const u8).add(i)) as u64;
        }
        a ^= hasher;
    }
}

fn h(n: [isize; 7], n1: usize, n2: i32) -> [isize; 7] {
    let aa = [0];
    let n = ac(n1, n2);
    o([13; 2], n, 15609822513776909592, n, n, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    [13; 7]
}

fn ac(n1: usize, n2: i32) -> *mut isize {
    let mut af = [0_isize; 7];
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(n1, n2, [0], [0]);
    ptr::addr_of_mut!(af[3])
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, i64, i8),
            [f32; 1],
            (usize, u8),
            i8,
            (isize, i64),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56_isize; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}