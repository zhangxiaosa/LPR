#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac(p_0: isize, p_1: isize, p_2: isize, p_3: isize, p_4: isize, p_5: isize, p_6: isize) -> *mut isize {
    let ae_0: isize = 0;
    let ae_1: isize = 0;
    let ae_2: [isize; 1] = [0];
    let ae_3: isize = 0;
    let mut ae: (isize, isize, [isize; 1], isize) = (ae_0, ae_1, ae_2, ae_3);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p_0, p_1, p_2, p_3, p_4, p_5, p_6);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z_0: isize, z_1: isize, n_0: isize, n_1: isize, n_2: isize, n_3: isize, n_4: isize, n_5: isize, n_6: isize, r: usize, af_0: isize, af_1: isize, af_2: isize, af_3: isize, af_4: isize, af_5: isize, af_6: isize, _: [isize; 7], ag: *mut isize) {
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
        (
            (0., 1_102_345_069_964_335_552, 9),
            [0.],
            (0, 0),
            0,
            (0, 0),
            [0.],
        ),
        ptr::null(),
    );
    loop {
        let n_0 = af_0;
        let n_1 = af_1;
        let n_2 = af_2;
        let n_3 = af_3;
        let n_4 = af_4;
        let n_5 = af_5;
        let n_6 = af_6;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n_0, n_1, n_2, n_3, n_4, n_5, n_6, 0);
        match t.4 .0 .2 {
            9 => {
                b(af_0, af_1, af_2, af_3, af_4, af_5, af_6, 0, 0, -9_223_372_036_854_775_808_isize, 0, z_0, z_1, n_0, n_1, n_2, n_3, n_4, n_5, n_6, r);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn h(z_decomposed_0: isize, z_decomposed_1: isize, _: usize, _: i32) -> [isize; 2] {
    let n = ac(z_decomposed_0, z_decomposed_1, z_decomposed_2, z_decomposed_3, z_decomposed_4, z_decomposed_5, z_decomposed_6);
    o(
        13, 13, n_0, n_1, n_2, n_3, n_4, n_5, n_6, 15609822513776909592, z_decomposed_0, z_decomposed_1, z_decomposed_2, z_decomposed_3, z_decomposed_4, z_decomposed_5, z_decomposed_6, z_decomposed_0, z_decomposed_1, n,
    );
    b(652623562_i32, 18399139786288871729_u64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4);
    b([112; 6], 1, 0, 4, 0, 0, 0, 0, 0);
    b((), (), [0], [0], (), (), [0], [0]);
    return [13; 2];
}

fn main() {
    println!(
        "{:?}",
        h(56_isize, 56_isize, 56_isize, 56_isize, 56_isize, 56_isize, 56_isize, 15609822513776909592_usize, 652623562_i32)
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}