#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::ptr;

fn b<f, w, d, e>(f: f, x: w, y: d, g: e) {
    f.hash(&mut DefaultHasher::new());
    x.hash(&mut DefaultHasher::new());
    y.hash(&mut DefaultHasher::new());
    g.hash(&mut DefaultHasher::new());
}

fn ac(p: [isize; 7]) -> *mut isize {
    let q = (0, [0; 3]);
    b(p, p, 0, 0);
    q.hash(&mut DefaultHasher::new());
    ptr::addr_of_mut!(0)
}

fn o(z: [isize; 2], n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    af = n.clone();
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
        af = n.clone();
        t.0 = ptr::null();
        b(0.isize, 0.isize, n, 0.isize);
        match t.4 .0 .2 {
            9 => {
                b(af, 0.isize, -9_223_372_036_854_775_808.isize, 0.isize);
                b(z, [56.isize; 7], n, 0.isize);
                return;
            }
            _ => unsafe {
                *ag = 88.isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed);
    o([13.isize; 2], z_decomposed, z_decomposed, z_decomposed, n);
    b(652623562_i32, 18399139786288871729_u64, 0.isize, 0.isize);
    b([112.isize; 6], 1.isize, 0.isize, 4.isize);
    b((), (), [0.isize], [0.isize]);
    [13.isize; 2]
}

fn main() {
    println!("{:?}", h([56.isize; 7]));
    unsafe {
        println!("hash: {}", DefaultHasher::new().finish());
    }
}