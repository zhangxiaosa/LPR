#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a: DefaultHasher = DefaultHasher::new();

    fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }

    fn h() -> [isize; 2] {
        let z: [isize; 7] = [0, 0, 0, 0, 0, 0, 0];
        let aa: [isize; 1] = [0];
        let n: *mut [isize; 3] = &mut [0, 0, 0];
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0, 0, 0], 0, 0);
        b(&z, &z, &0, &0);
        unsafe {
            q.hash(&mut a);
            (*n).hash(&mut a);
        }
        let ae: *mut isize = &mut 0;
        let j: i32 = 0;
        let k: u64 = 0;
        let ad: [isize; 3] = [0, 0, 0];
        let mut ae_tuple: (isize, isize, [isize; 3], isize) = (0, 0, ad, 0);
        let t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), f32, (usize, u8), i8, (isize, i64), f32), *const u8) = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0.0, 0, 0), 0.0, (0, 0), 0, (0, 0), 0.0), ptr::null());

        loop {
            af = z;
            let ae = 0;
            t.0 = ptr::addr_of!(t.1 .0);
            t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
            b(&0, &0, &n, &0);
            match t.4 .0 .2 {
                9 => {
                    b(&af, &ae, &0, &j);
                    b(&z, &p, &n, &r);
                    return [13, 13];
                }
                _ => unsafe {
                    let _ag: *mut isize = &mut 88;
                },
            }
        }
    }

    let result = h();
    println!("{:?}", result);
    println!("hash: {}", a.finish());
}