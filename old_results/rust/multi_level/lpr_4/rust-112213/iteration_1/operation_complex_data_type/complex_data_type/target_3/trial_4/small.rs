#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let aa = [0];
    let mut n = [0; 7];
    o([13; 2], z, 15609822513776909592, z, z, &mut ag);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: &mut *mut isize) {
    let mut t_0_0: *const usize = ptr::null();
    let mut t_0_1: (usize, u8) = (0, 0);
    let mut t_1_0: char = 'a';
    let mut t_1_1: i32 = 0;
    let mut t_1_2_0: (i64,) = (0,);
    let mut t_1_3: u64 = 0;
    let mut t_2_0_0: f64 = 0.0;
    let mut t_2_0_1: i64 = 0;
    let mut t_2_0_2: i8 = 0;
    let mut t_2_1: [f32; 1] = [0.0];
    let mut t_2_2_0: usize = 0;
    let mut t_2_2_1: u8 = 0;
    let mut t_2_3: i8 = 0;
    let mut t_2_4_0: isize = 0;
    let mut t_2_4_1: i64 = 0;
    let mut t_2_5: [f32; 1] = [0.0];
    let mut t_3: *const u8 = ptr::null();

    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t_0_0 = ptr::addr_of!(t_0_1 .0);
        t_2_0_0 = f64::NAN;
        t_2_0_1 = 1_102_345_069_964_335_552_i64;
        t_2_0_2 = 9_i8;
        b(0, 0, n, 0);
        match t_2_0_2 {
            9 => {
                b(af, ae, ah, 0);
                b(z, [56_isize; 7], n, r);
                return;
            }
            _ => unsafe {
                **ag = 88_isize;
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
