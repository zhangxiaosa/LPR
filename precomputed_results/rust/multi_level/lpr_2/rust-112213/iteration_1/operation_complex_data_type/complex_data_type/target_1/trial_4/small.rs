//![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();

fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0_isize];
    let n = {
        let mut ae = (0_isize, 0_isize, [0_isize], 0_isize);
        let q = (0_isize, 0_isize, [0_isize; 3], 0_isize);
        b(z, z, 0_isize, 0_isize);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };
    o([13_isize; 2], z, i, z, z, j, n);
    b(j, k, 0_isize, 0_isize);
    b([112_isize; 6], 1_isize, 0_isize, 4_isize);
    b((), (), [0_isize], aa);
    return [13_isize; 2];
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut usize) {
    let mut t: (*const usize, (usize, i8), (char, i32, (isize,), u64), char, ((f64, isize, i8), [f32; 1], (usize, i8), i8, (isize, isize), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0.0_f64, 0_isize, 0_i8), [0.0_f32], (0_usize, 0_i8), 0_i8, (0_isize, 0_isize), [0.0_f32]), ptr::null());
    loop {
        af = n;
        let ae = 0_isize;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
        b(0_isize, 0_isize, n, 0_isize);
        match t.4 .0 .2 {
            9 => {
                b(af, ae, -9223372036854775808_isize, s);
                b(z, p, n, r);
                return;
            }
            _ => unsafe {
                *ag = 88_usize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    unsafe { println!("hash: {}", a.finish()); }
}