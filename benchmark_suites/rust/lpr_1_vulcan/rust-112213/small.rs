#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::*;
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
fn h(z: [isize; 7], i: usize, j: i32, _: u64, ac_result: *mut isize) {
    let ab = [13; 2];
    o(ab, z, i, z, z, j, ac_result);
    b(true, z, 0, 0);
    b(false, (), z, z);
}
fn o(
    z: [isize; 2],
    ac_result: [isize; 7],
    _: usize,
    mut af: [isize; 7],
    _: [isize; 7],
    _: i32,
    ag: *mut isize,
) {
    let mut t: (
        _,
        (usize, isize),
        (char, i32, (i64,), isize),
        char,
        (
            (f64, i64, i8),
            [f64; 1],
            (usize, isize),
            isize,
            (isize, i64),
            [f64; 1],
        ),
        *const isize,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = ac_result;
        t.0 = ptr::addr_of_mut!(t.1);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, ac_result, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, z, -9223372036854775808_isize, z);
                b(z, ac_result, ac_result, z);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}
fn main() {
    let ac_result;
    {
        let ad = [0; 3];
        let mut z = (true, 0, ad, 0);
        let q: (isize, isize, [isize; 3], isize, isize) = (0, 0, ad, 0, 0);
        b([56_isize; 7], [56_isize; 7], 0, 0);
        unsafe {
            q.hash(&mut a);
            z.hash(&mut a);
        }
        ac_result = ptr::addr_of_mut!(z.3);
    }
    println!(
        "{:?}",
        h(
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64,
            ac_result
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}
