#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: u128, x: u128, y: u128, g: u128) {
    unsafe {
        const HASHER: &mut DefaultHasher = &mut a;
        f.hash(HASHER);
        x.hash(HASHER);
        y.hash(HASHER);
        g.hash(HASHER);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let mut ae = (0, 0, [0], 0);
        let q = (0, 0, [0; 3], 0);
        b(z, z, 0, 0);
        unsafe {
            const HASHER: &mut DefaultHasher = &mut a;
            q.hash(HASHER);
            ae.hash(HASHER);
        }
        ptr::addr_of_mut!(ae.3)
    };
    o([13; 2], z, i, z, z, j, n);
    b(j as u128, k as u128, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa[0] as u128);
    return [13; 2];
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut usize,
) {
    let mut t: (usize, usize, usize, char, (f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1], *const u8) = (
        0, 0, 0, 'a', (0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.],
        ptr::null(),
    );
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.2);
        t.4 = (f64::NAN, 1102345069964335552, 9);
        b(0, 0, n[0] as u128, 0);
        match t.4.2 {
            9 => {
                b(af, ae, -9223372036854775808, s as u128);
                b(z, p, n, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56; 7],
            15609822513776909592,
            652623562,
            18399139786288871729,
        ),
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}