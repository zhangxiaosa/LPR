#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::*;
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
fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (true, [0], 0);
    b(p, p, 0, 0);
    unsafe {
        p.hash(&mut a);
        ae.hash(&mut a);
    }
    ptr::addr_of_mut!(ae.2)
}
fn o(_: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t: (
        _,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, isize, i8),
            [f32; 1],
            (usize, isize),
            isize,
            (isize, isize),
            [f64; 1],
        ),
        *const isize,
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
        af = n;
        t.0 = ptr::addr_of_mut!(t.1);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, 0, -9_223_372_036_854_775_808_isize, 0);
                b(af, [56_isize; 7], n, 0);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}
fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);
    b(false, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b(false, (), 0, [0]);
    [13; 2]
}
fn main() {
    println!("{:?}", h([56_isize; 7]));
    unsafe {
        println!("hash: {}", a.finish());
    }
}
