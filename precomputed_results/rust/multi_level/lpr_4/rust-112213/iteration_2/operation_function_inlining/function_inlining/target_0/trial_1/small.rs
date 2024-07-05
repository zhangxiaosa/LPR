#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = {
        let mut ae = (0_isize, 0_isize, [0], 0_isize);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
        {
            unsafe {
                (0, 0, [0; 3], 0, 0).1.hash(&mut a);
                (0_isize, 0_isize, [0], 0_isize).hash(&mut a);
            }
        }
        let af = (0_isize, 0_isize, [0], 0_isize);
        let _: [isize; 7] = (0, 0, [0; 7]);
        let mut ag: &mut isize = &mut ae.3;
        let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
        loop {
            af = (0, 0, [0], 0);
            let ah = -9_223_372_036_854_775_808_isize;
            let ae = 0;
            t.0 = ptr::addr_of!(t.1 .0);
            t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
            {
                unsafe {
                    0.hash(&mut a);
                    0.hash(&mut a);
                    (0, 0, [0; 7]).hash(&mut a);
                    0.hash(&mut a);
                }
            }
            match t.4 .0 .2 {
                9 => {
                    {
                        unsafe {
                            (0, 0, [0; 7]).hash(&mut a);
                            [56_isize; 7].hash(&mut a);
                        }
                    }
                    return [0; 2];
                }
                _ =>
                {
                    unsafe { *ag = 88_isize; }
                },
            }
        }
    };

    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13; 2];
}

fn o(z: [isize; 2], _: [isize; 7], _: usize, mut af: [isize; 7], _: [isize; 7], _: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]), ptr::null());
    loop {
        af = [0; 7];
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        b(0, 0, [0; 7], 0);
        match t.4 .0 .2
        {
            9 => {
                b([0; 7], 0, ah, 0);
                b(z, [56_isize; 7], [0; 7], 0);
                return;
            }
            _ => { unsafe { *0 = 88_isize; } }
        }
    }
}

fn main() {
    unsafe { println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32)); }
}