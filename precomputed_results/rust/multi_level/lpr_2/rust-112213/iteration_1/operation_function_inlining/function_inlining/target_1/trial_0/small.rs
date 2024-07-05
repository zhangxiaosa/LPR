#![feature(const_hash)]

use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: std::collections::hash_map::DefaultHasher = std::collections::hash_map::DefaultHasher::new();

unsafe fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
    g.hash(&mut a);
}

fn main() {
    {
        let z = [56_isize; 7];
        let i = 15609822513776909592_usize;
        let j = 652623562_i32;
        let k = 18399139786288871729_u64;
        let aa = [0];
        let n = {
            let mut ae = (0, 0, [0], 0);
            let q = (0, 0, [0; 3], 0);
            unsafe {
                b(z, z, 0, 0);
                q.hash(&mut a);
                ae.hash(&mut a);
            }
            ptr::addr_of_mut!(ae.3)
        };
        {
            let mut af = z;
            let mut t: (
                *const usize,
                (usize, i8),
                (char, i32, (isize,), u64),
                char,
                (
                    (f64, isize, i8),
                    [f32; 1],
                    (usize, i8),
                    i8,
                    (isize, isize),
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
                af = z;
                let ae = 0;
                t.0 = ptr::addr_of!(t.1.0);
                t.4.0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
                unsafe {
                    b(0, 0, n, 0);
                    match t.4.0.2 {
                        9 => {
                            b(af, ae, -9223372036854775808_isize, j);
                            b(z, z, n, i);
                            return;
                        }
                        _ => {
                            *ptr::addr_of_mut!(n as *mut usize) = 88_usize;
                        }
                    }
                }
            }
        }
        unsafe {
            b(j, k, 0, 0);
            b([112; 6], 1, 0, 4);
            b((), (), [0], aa);
        }
        let result = [13; 2];
        println!("{:?}", result);
    }
}