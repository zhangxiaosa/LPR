#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: u64 = 0;
fn b<T1: std::hash::Hasher, T2: std::hash::Hasher, T3: std::hash::Hasher, T4: std::hash::Hasher>(f: &mut T1, x: &mut T2, y: &mut T3, g: &mut T4) {
    unsafe {
        f.hash(&mut a as &mut u64);
        x.hash(&mut a as &mut u64);
        y.hash(&mut a as &mut u64);
        g.hash(&mut a as &mut u64);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let mut ae = (0, 0, [0], 0);
        let q = (0, 0, [0; 3], 0);
        b(&mut z, &mut z, &mut 0, &mut 0);
        unsafe {
            q.hash(&mut a as &mut u64);
            ae.hash(&mut a as &mut u64);
        }
        ptr::addr_of_mut!(ae.3)
    };
    o([13; 2], z, i, z, z, j, n);
    b(&mut j, &mut k, &mut 0, &mut 0);
    b(&mut [112; 6], &mut 1, &mut 0, &mut 4);
    b(&mut (), &mut (), &mut [0], &mut aa);
    return [13; 2];
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut u64) {
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, i64, i8),
            [f32; 1],
            (usize, u8),
            (isize, i64),
            [f32; 1],
        ),
        *const u8,
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
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(&mut 0, &mut 0, &mut n, &mut 0);
        match t.4 .0 .2 {
            9 => {
                b(&mut af, &mut ae, &mut 0, &mut s);
                b(&mut z, &mut p, &mut n, &mut r);
                return;
            }
            _ => unsafe {
                *ag = 88_u64;
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