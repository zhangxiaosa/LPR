#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
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
fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(z);
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]),
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
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        unsafe {
            0.hash(&mut a);
            0.hash(&mut a);
            n.hash(&mut a);
            0.hash(&mut a);
        }
        match t.4 .0 .2 {
            9 => {
                unsafe {
                    af.hash(&mut a);
                    ae.hash(&mut a);
                    ah.hash(&mut a);
                    0.hash(&mut a);
                }
                unsafe {
                    z.hash(&mut a);
                    [56_isize; 7].hash(&mut a);
                    n.hash(&mut a);
                    r.hash(&mut a);
                }
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}
fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    unsafe {
        p.hash(&mut a);
        p.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);
    }
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}
fn main() {
    println!(
        "{:?}",
        h([56_isize; 7], 15609822513776909592_usize, 652623562_i32)
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}