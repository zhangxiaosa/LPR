#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, w: Hash, d: Hash, UnknownType: Hash>(
    f: f,
    x: w,
    y: d,
    g: UnknownType
) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac(
    p_0: isize,
    p_1: isize,
    p_2: isize,
    p_3: isize,
    p_4: isize,
    p_5: isize,
    p_6: isize
) -> *mut isize {
    let mut ae = (0, [0], 0);
    let q = (0, [0; 3]);

    b(p_0, p_1, p_2, p_3, p_4, p_5, p_6);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }

    ptr::addr_of_mut!(ae.2)
}

fn o(
    z_0: isize,
    z_1: isize,
    n_0: isize,
    n_1: isize,
    n_2: isize,
    n_3: isize,
    n_4: isize,
    n_5: isize,
    n_6: isize,
    mut af_0: isize,
    mut af_1: isize,
    mut af_2: isize,
    mut af_3: isize,
    mut af_4: isize,
    mut af_5: isize,
    mut af_6: isize,
    _: isize,
    ag: *mut isize
) {
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
        af_0 = n_0;
        af_1 = n_1;
        af_2 = n_2;
        af_3 = n_3;
        af_4 = n_4;
        af_5 = n_5;
        af_6 = n_6;

        t.0 = ptr::addr_of!(t.1 .0);
        b(0, 0, n_0, n_1, n_2, n_3, n_4, n_5, n_6, 0);

        match t.4 .0 .2 {
            9 => {
                b(af_0, af_1, af_2, af_3, af_4, af_5, af_6, 0, 0);
                b(z_0, z_1, n_0, n_1, n_2, n_3, n_4, n_5, n_6, 0);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed[0], z_decomposed[1], z_decomposed[2], z_decomposed[3], z_decomposed[4], z_decomposed[5], z_decomposed[6]);
    o(13, 13, z_decomposed[0], z_decomposed[1], z_decomposed[2], z_decomposed[3], z_decomposed[4], z_decomposed[5], z_decomposed[6], n);
    b(652623562, 18399139786288871729, 0, 0);
    b(112, 1, 0, 4);
    b((), (), 0, 0);
    [13, 13]
}

fn main() {
    println!("{:?}", h([56; 7]));
    unsafe {
        println!("hash: {}", a.finish());
    }
}