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

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    unsafe {
        p.hash(&mut a);
        p.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    let mut t: (
        *const usize,
        (usize, u8),
        (char, i32, (i64,), u64),
        char,
        (
            (f64, i64, i8),
            [f32; 1],
            (usize, u8),
            i8,
            (isize, i64),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    loop {
        af = n;
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        unsafe {
            0.hash(&mut a);
            0.hash(&mut a);
            n.hash(&mut a);
            0.hash(&mut a);
        }
        match t.4 .0 .2 {
            9 => {
                unsafe {
                    n.hash(&mut a);
                    ae.hash(&mut a);
                }
                unsafe { *ag = 88_isize; }
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    {
        let aa = [0];
        let n = {
            let mut ae = (0_isize, 0_isize, [0], 0_isize);
            let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
            unsafe {
                [56_isize; 7].hash(&mut a);
                [56_isize; 7].hash(&mut a);
            }
            ptr::addr_of_mut!(ae.3)
        };
        {
            let mut t: (
                *const usize,
                (usize, u8),
                (char, i32, (i64,), u64),
                char,
                (
                    (f64, i64, i8),
                    [f32; 1],
                    (usize, u8),
                    i8,
                    (isize, i64),
                    [f32; 1],
                ),
                *const u8,
            ) = (
                ptr::null(),
                (0, 0),
                ('a', 0, (0,), 0),
                'a',
                ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
                ptr::null(),
            );
            loop {
                [56_isize; 7] = [56_isize; 7];
                let ah = -9_223_372_036_854_775_808_isize;
                let ae = 0;
                t.0 = ptr::addr_of!(t.1 .0);
                t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
                unsafe {
                    0.hash(&mut a);
                    0.hash(&mut a);
                    [56_isize; 7].hash(&mut a);
                    0.hash(&mut a);
                }
                match t.4 .0 .2 {
                    9 => {
                        unsafe {
                            [56_isize; 7].hash(&mut a);
                            ae.hash(&mut a);
                        }
                        unsafe { *ag = 88_isize; }
                        {
                            unsafe {
                                [13; 2].hash(&mut a);
                                [56_isize; 7].hash(&mut a);
                                [56_isize; 7].hash(&mut a);
                                15609822513776909592.hash(&mut a);
                            }
                            return;
                        }
                    }
                    _ => unsafe {
                        *ag = 88_isize;
                    },
                }
            }
        }
        [13; 2]
    }
    unsafe {
        println!("hash: {}", a.finish());
    }
}