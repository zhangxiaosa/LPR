#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();
fn b<f: Hash, w: Hash, e: Hash>(f: f, x: w, y: usize, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}
fn h(z: [isize; 7], _: usize, _: usize) -> [usize; 2] {
    let aa = [0];
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    b(652623562_i32, 18399139786288871729_u64, 0_usize, 0_usize);
    b([112; 6], 1_usize, 0_usize, 4_usize);
    b((), (), [0], aa);
    return [13_usize; 2];
}
fn ac(p: [usize; 7]) -> *mut isize {
    let mut ae = (0_usize, 0_usize, [0_usize], 0_usize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0_usize, 0_usize);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}
fn o(z: [isize; 2], n: [usize; 7], r: usize, mut af: [usize; 7], _: [usize; 7], ag: *mut isize) {
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
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56; 7], n, r);
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
        h([56_isize; 7], 15609822513776909592_usize, 652623562_i32)
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}