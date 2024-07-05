#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn b(f: u64, x: u64, y: u64, g: u64) {
    unsafe {
        f.hash(&mut a as &mut u64);
        x.hash(&mut a as &mut u64);
        y.hash(&mut a as &mut u64);
        g.hash(&mut a as &mut u64);
    }
}

fn h(_: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = ac(_);
    o(
        [13; 2],
        _,
        15609822513776909592 as u64,
        _,
        _,
        n,
    );
    b(652623562_u64, 18399139786288871729_u64, 0_u64, 0_u64);
    b([112; 6], 1_u64, 0_u64, 4_u64);
    b((), (), [0_u64], [0_u64]);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0_u64, 0_u64);
    unsafe {
        q.hash(&mut a as &mut u64);
        ae.hash(&mut a as &mut u64);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, _: [isize; 7], _: [isize; 7]) {
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
        _: [isize; 7] = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0_u64, 0_u64, n as u64, 0_u64);
        match t.4 .0 .2 {
            9 => {
                b(_, ae, -9_223_372_036_854_775_808_isize as u64, 0_u64);
                b(z, [56_isize; 7], n, r as u64);
                return;
            }
            _ => unsafe {
                *ptr::addr_of_mut!(ag) = 88_isize;
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
        println!("hash: {}", a as u64);
    }
}