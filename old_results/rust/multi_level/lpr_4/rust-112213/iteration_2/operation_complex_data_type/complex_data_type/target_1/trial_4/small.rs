#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: u32, x: u64, y: u32, g: u32) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h() {
    let z: [isize; 7] = [0; 7];
    let n: *mut isize = ptr::null_mut();
    let r: usize = 0;
    let af: [isize; 7] = [0; 7];
    let ag: *mut isize = ptr::null_mut();

    let mut t: (usize, usize, (usize, u8), (char, i32, (i64,), u64), *const u8) = (0, 0, (0, 0), ('a', 0, (0,), 0), ptr::null());
    loop {
        af = unsafe { *n };
        let ah: isize = -9_223_372_036_854_775_808;
        let ae: isize = 0;
        let mut temp1: *const usize = ptr::null();
        let mut temp2: usize = 0;
        let temp3: f64 = f64::NAN;
        let temp4: i64 = 1_102_345_069_964_335_552;
        let temp5: i8 = 9;
        let temp6: f32 = 0.0;
        let temp7: usize = 0;
        let temp8: u8 = 0;
        let temp9: isize = 0;
        let temp10: i64 = 0;
        let temp11: f32 = 0.0;
        let temp12: *const u8 = ptr::null();

        unsafe {
            a.hash(&mut temp1);
            temp2.hash(&mut a);
            (temp3, temp4, temp5).hash(&mut a);
            temp8.hash(&mut a);
            (temp6, [temp6], (temp7, temp8), temp5, (temp9, temp10), [temp11]).hash(&mut a);
        }

        b(0, 0, 0, 0);

        match temp5 {
            9 => {
                b(af, ae, ah, 0);
                b([0; 2], [56; 7], n, r);
                return;
            }
            _ => unsafe {
                *ag = 88;
            }
        }
    }
}

fn main() {
    h();
    unsafe {
        println!("hash: {}", a.finish());
    }
}