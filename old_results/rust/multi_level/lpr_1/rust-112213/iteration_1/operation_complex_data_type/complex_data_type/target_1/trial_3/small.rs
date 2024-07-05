#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn b(f: u64, x: u64, y: u64, g: u64, hasher: &mut DefaultHasher) {
    f.hash(hasher);
    x.hash(hasher);
    y.hash(hasher);
    g.hash(hasher);
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: &mut isize) -> [isize; 2] {
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac_result;
    o(ab, z, i, z, z, j, n);
    let mut hasher = DefaultHasher::new();
    b(j as u64, k, 0, 0, &mut hasher);
    b(112, 1, 0, 4, &mut hasher);
    b(0u64, 0, m, aa, &mut hasher);
    *ac_result = hasher.finish() as isize;
    ab
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: &mut isize,
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
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut u: ((f64, i64, i8),) = Default::default();
    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        let mut hasher = DefaultHasher::new();
        b(0, 0, n, 0, &mut hasher);
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                *ag = 88_isize;
                break;
            }
            _ => {
                *ag = 88_isize;
                break;
            }
        }
    }
}

fn main() {
    let mut ac_result: isize;
    {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        let mut hasher = DefaultHasher::new();
        b(56, 56, 0, 0, &mut hasher);
        q.hash(&mut hasher);
        ae.hash(&mut hasher);
        ac_result = hasher.finish() as isize;
    }
    let mut ac_result_ptr = &mut ac_result as *mut isize;
    println!("{:?}", h([56; 7], 15609822513776909592, 652623562, 18399139786288871729, &mut ac_result_ptr));
    let mut hasher = DefaultHasher::new();
    println!("hash: {}", ac_result);
}