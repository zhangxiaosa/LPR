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

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let ad = [0; 3];
    let ae_0 = 0;
    let ae_1 = 0;
    let ae_2 = ad;
    let ae_3 = 0;
    let ae = (ae_0, ae_1, ae_2, ae_3);
    let q_0 = 0;
    let q_1 = 0;
    let q_2 = ad;
    let q_3 = 0;
    let q_4 = 0;
    let q = (q_0, q_1, q_2, q_3, q_4);
    let mut n: [isize; 2];
    b(z, z, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    n = ptr::addr_of_mut!(ae.3);
    o([13, 13], z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13, 13];
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    _ag: *mut isize,
) {
    let mut t_0: *const usize;
    let mut t_1_0: usize;
    let mut t_1_1: u8;
    let mut t_2_0: char;
    let mut t_2_1: i32;
    let mut t_2_2_0: i64;
    let mut t_2_3: u64;
    let mut t_3: char;
    let mut t_4_0_0: f64;
    let mut t_4_0_1: i64;
    let mut t_4_0_2: i8;
    let mut t_4_1: f32;
    let mut t_4_2_0: usize;
    let mut t_4_2_1: u8;
    let mut t_4_3: i8;
    let mut t_4_4_0: isize;
    let mut t_4_4_1: i64;
    let mut t_4_5: f32;
    let mut t_5: *const u8;
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        ((f64, i64, i8), f32, (usize, u8), i8, (isize, i64), f32),
        *const u8,
    );
    loop {
        af = n;
        let ae = 0;
        t_0 = ptr::addr_of!(t.1 .0);
        t_1_0 = f64::NAN;
        t_1_1 = 1102345069964335552_i64;
        t_2_0 = 'a';
        t_2_1 = 0;
        t_2_2_0 = 0;
        t_2_3 = 0;
        t_3 = 'a';
        t_4_0_0 = (0.0, 0, 0);
        t_4_0_1 = 0.0;
        t_4_0_2 = (0, 0);
        t_4_1 = 0;
        t_4_2_0 = 0;
        t_4_2_1 = 0;
        t_4_3 = 0;
        t_4_4_0 = 0;
        t_4_4_1 = 0;
        t_4_5 = 0.0;
        t = (
            t_0,
            (t_1_0, t_1_1),
            (t_2_0, t_2_1, (t_2_2_0,), t_2_3),
            t_3,
            ((t_4_0_0, t_4_0_1, t_4_0_2), t_4_1, (t_4_2_0, t_4_2_1), t_4_3, (t_4_4_0, t_4_4_1), t_4_5),
            t_5
        );
        o_1(z, p, n, r, af, s, _ag);
        b(j, k, 0, 0);
        b([112; 6], 1, 0, 4);
        b((), (), [0], aa);
        return;
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}