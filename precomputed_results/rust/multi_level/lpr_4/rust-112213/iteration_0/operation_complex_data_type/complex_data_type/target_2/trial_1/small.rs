#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

type Array6 = [isize; 6];

type Array7 = [isize; 7];

type Array2 = [isize; 2];

type Tuple4 = (isize, isize, Array3, isize);

type Tuple5 = (u8, u128, Array3, isize, i16);

type Tuple6 = (*const usize, Tuple2, Tuple3, char, Tuple6_1, *const u8);

type Tuple2 = (usize, u8);

type Tuple3 = (char, i32, Array1, u64);

type Tuple6_1 = (Tuple3_1, Tuple1, Tuple2, i8, Tuple2_1, Array1);

type Tuple3_1 = (f64, i64, i8);

type Tuple2_1 = (usize, u8);

type Tuple1 = [f32; 1];

type Array3 = [isize; 3];

fn b<'a, c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: Array7, i: usize, j: i32, k: u64) -> Array2 {
    let l = 1;
    let aa: Array6 = [0; 6];
    let m: Array6 = [0; 6];
    let ab: Array2 = [13; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
    b((), (), m, aa);
    return ab;
}

fn ac(p: Array7) -> *mut isize {
    let ad: Array3 = [0; 3];
    let mut ae: Tuple4 = (0, 0, ad, 0);
    let q: Tuple5 = (0, 0, ad, 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(
    z: Array2,
    n: Array7,
    r: usize,
    mut af: Array7,
    p: Array7,
    s: i32,
    ag: *mut isize,
) {
    let mut t: Tuple6 = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut u: Tuple1 = ((0., 0, 0),);

    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        b(0, 0, n, 0);

        u.0 = t.4 .0;
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
