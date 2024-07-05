#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn b<f: Hash, x: Hash, y: Hash, g: Hash>(f: f, x: x, y: y, g: g) {
    f.hash(&mut DefaultHasher::new());
    x.hash(&mut DefaultHasher::new());
    y.hash(&mut DefaultHasher::new());
    g.hash(&mut DefaultHasher::new());
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let mut ae = (0, 0, [0], 0);
        let q = (0, 0, [0; 3], 0);
        b(z, z, 0, 0);
        q.hash(&mut DefaultHasher::new());
        ae.hash(&mut DefaultHasher::new());
        ptr::addr_of_mut!(ae.3)
    };
    o([13; 2], z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13; 2];
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, af: [isize; 7], p: [isize; 7], s: i32, ag: *mut usize) {
    let mut t: (
        *const usize,
        (usize, i8),
        (char, i32, (isize,), u64),
        char,
        ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]),
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
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
        b(0, 0, n, 0);
        match t.4.0.2 {
            9 => {
                b(af, ae, -9223372036854775808_isize, s);
                b(z, p, n, r);
                return;
            }
            _ => unsafe {
                *ag = 88_usize;
            },
        }
    }
}

fn main() {
    println!("{:?}",
        h(
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
    println!("hash: 0");
}