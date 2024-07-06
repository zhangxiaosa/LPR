#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::*;
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();
fn b<T1: Hash, T2, T3: Hash, T4: Hash>(f: T1, _: T2, y: T3, g: T4) {
    unsafe {
        f.hash(&mut a);
        g.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}
fn h(z: [isize; 7], i: usize, j: i32, _: u64) -> [isize; 2] {
    let n = {
        let mut ae = (0, 0, [0], 0);
        let q = (0, 0, [0; 3], 0);
        b(z, z, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };
    o([13; 2], z, i, z, z, j, n);
    b(true, z, 0, 0);
    b(false, 1, 0, 4);
    b((), (), 0, z);
    [13; 2]
}
fn o(
    z: [isize; 2],
    n: [isize; 7],
    _: usize,
    mut af: [isize; 7],
    _: [isize; 7],
    _: i32,
    ag: *mut isize,
) {
    let mut t: (
        *const usize,
        (usize, isize),
        (char, isize, (i64,), isize),
        char,
        (
            (f64, i64, i8),
            [f64; 1],
            (usize, isize),
            (isize, i64),
            [f64; 1],
        ),
        *const isize,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of_mut!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, 0, z);
                b(z, n, n, z);
                return;
            }
            _ => unsafe {
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
            15_609_822_513_776_909_592_usize,
            652_623_562_i32,
            18_399_139_786_288_871_729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}
