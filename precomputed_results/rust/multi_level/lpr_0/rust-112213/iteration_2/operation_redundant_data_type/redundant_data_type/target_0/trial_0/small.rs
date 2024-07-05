#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::ptr;

static mut a: (char, i32, (i64,), u64) = (0 as char, 0, (0,), 0);

fn b(f: (char, i32, (i64,), u64), x: (char, i32, (i64,), u64), y: (char, i32, (i64,), u64), g: (char, i32, (i64,), u64)) {
    unsafe {
        
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> (char, i32, (i64,), u64) {
    let aa: (char, i32, (i64,), u64) = (0, 0, (0,), 0);
    let n: *mut (char, i32, (i64,), u64) = ptr::null_mut();
    o([13, 13], z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return (0, 0, (0,), 0);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::null();
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, 0, s);
                b(z, p, n, r);
                return;
            }
            v => unsafe {
                *_ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64
    ));
    unsafe {
        println!("hash: {{}}", a.finish());
    }
}