#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f64, isize, i8>(f: f64, x: isize, y: i8, g: i8) {
    unsafe {
        f\.hash(&mut a);
        x\.hash(&mut a);
        y\.hash(&mut a);
        g\.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -&gt; [isize; 2] {
    let aa = [0];
    let mut ae = [0, 0, 0, 0, 0, 0, 0];
    let mut q = [0, 0, 0];

    b(&amp;z, &amp;z, 0, 0);
    unsafe {
        ptr::addr_of_mut!(ae[3]);
    }

    o([13, 13], z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112, 112, 112, 112, 112, 112], 1, 0, 4);
    b((), (), [0], aa);

    return [13, 13];
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut usize) {
    let mut t0: *const usize = ptr::null();
    let mut t1: (usize, i8) = (0, 0);
    let mut t2: (char, i32, (isize,), u64) = ('a', 0, (0,), 0);
    let mut t3: char = 'a';
    let mut t4: ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]) = ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]);
    let mut t5: *const u8 = ptr::null();

    loop {
        af = n;
        let mut ae: isize = 0;
        t0 = ptr::addr_of!(t1.0);
        t4.0 = (f64::NAN, 1102345069964335552, 9);
        b(0, 0, &amp;n, 0);

        match t4.0.2 {
            9 =&gt; {
                b(af, ae, -9223372036854775808, s);
                b(z, p, n, r);
                return;
            }
            _ =&gt; unsafe {
                *ag = 88;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56, 56, 56, 56, 56, 56, 56], 15609822513776909592, 652623562, 18399139786288871729));
    unsafe {
        println!("hash: {}", a.finish());
    }
}