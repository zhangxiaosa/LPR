#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
    g.hash(&mut a);
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: &mut isize) -> [isize; 2] {
    let aa = [0isize; 6];
    let m = [0isize; 6];
    let ab = [13isize; 2];
    let n = ac_result;
    o(ab, &z, i, &z, &z, j, n);
    b(j, k, 0, 0);
    b([112u8; 6], 1, 0, 4);
    b((), (), &m, &aa);
    ab
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, af: &mut [isize; 7], p: [isize; 7], s: i32, ag: &mut isize) {
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
    let mut u: ((f64, i64, i8),) = Default::default();
    
    loop {
        *af = n;
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
            _ => {
                *ag = 88_isize;
            }
        }
    }
}

fn main() {
    let mut ac_result: isize;
    {
        let ad = [0isize; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b([56isize; 7], [56isize; 7], 0, 0);
        q.hash(&mut a);
        ae.hash(&mut a);
        ac_result = ae.3;
    }
    println!("{:?}", h([56isize; 7], 15609822513776909592usize, 652623562i32, 18399139786288871729u64, &mut ac_result).to_vec());
    println!("hash: {}", a.finish());
}