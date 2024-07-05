#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: i32, x: i32, y: i32, g: i32) {
    unsafe {
        let mut hasher = DefaultHasher::new();
        f.hash(&mut hasher);
        x.hash(&mut hasher);
        y.hash(&mut hasher);
        g.hash(&mut hasher);
        a = hasher.finish();
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let mut ae = (0, 0, [0], 0);
        let q = (0, 0, [0; 3], 0);
        b(z, z, 0, 0);
        b(q.0, q.1, q.2[0], q.3);
        b(ae.0, ae.1, ae.2[0], ae.3);
        ptr::addr_of_mut!(ae.2[0])
    };
    o([13; 2], z, i, z, z, j, n);
    b(j, k as i32, 0, 0);
    b([112; 6][0], 1, 0, 4);
    b(0, 0, 0, aa[0]);
    return [13; 2];
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut usize,
) {
    let mut t: (
        *const usize,
        (usize, i8),
        (char, i32, (isize,), u64),
        char,
        (
            (f64, isize, i8),
            [f32; 1],
            (usize, i8),
            i8,
            (isize, isize),
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
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
        b(0, 0, n[0], 0);
        match t.4 .0 .2 {
            9 => {
                b(af[0], ae, -9223372036854775808_isize, s);
                b(z[0], p[0], n[0], r as i32);
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