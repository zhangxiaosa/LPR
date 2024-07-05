#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, x: Hash, y: Hash, g: Hash>(f: f, x: x, y: y, g: g) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac(p: [isize; 7]) -> *mut isize {
    let q = (0, [0; 3]);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
    }
    ptr::addr_of_mut!(p[0])
}

fn o(z: [isize; 2], n: [isize; 7], _af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    b(0, 0, n, 0);
    match z[1] {
        9 => {
            b(n, 0, -9_223_372_036_854_775_808_isize, 0);
            b(z, [56_isize; 7], n, 0);
            return;
        }
        _ => unsafe {
            *ag = 88_isize;
        },
    }
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let z = z_decomposed;
    o([13; 2], z, z, z, ac(z_decomposed));
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    [13; 2]
}

fn main() {
    println!("{:?}", h([56_isize; 7]));
    unsafe {
        println!("hash: {}", a.finish());
    }
}