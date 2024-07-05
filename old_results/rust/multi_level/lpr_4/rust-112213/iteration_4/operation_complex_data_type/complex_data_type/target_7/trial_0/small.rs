#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b(f: u32, x: u32, y: u32, g: u32) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac(p: [u32; 7]) -> *mut isize {
    let mut ae: (u32, [u32; 1], u32) = (0, [0], 0);
    let q: (u32, [u32; 3]) = (0, [0; 3]);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    ptr::addr_of_mut!(ae.2)
}

fn o(z: [isize; 2], n: [u32; 7], mut af: [u32; 7], _: [u32; 7], ag: *mut isize) {
    let mut t: (*const u8, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 1_102_345_069_964_335_552, 9), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    loop {
        af = n;
        t.0 = ptr::addr_of!(t.1 .0) as *const u8;
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, 0, -9_223_372_036_854_775_808_isize as u32, 0);
                b(z, [56_u32; 7], n, 0);
                return;
            }
            _ => unsafe {
                *ag = 88_isize as u8;
            },
        }
    }
}

fn h(z_decomposed: [u32; 7]) -> [u32; 2] {
    let n = ac(z_decomposed);
    o([13; 2], z_decomposed, z_decomposed, z_decomposed, n);
    b(652623562_u32, 18399139786288871729_u64, 0, 0);
    b([112_u32; 6], 1, 0, 4);
    b((), (), [0_u32], [0_u32]);
    [13_u32; 2]
}

fn main() {
    println!("{:?}", h([56_u32; 7]));
    unsafe {
        println!("hash: {}", a);
    }
}