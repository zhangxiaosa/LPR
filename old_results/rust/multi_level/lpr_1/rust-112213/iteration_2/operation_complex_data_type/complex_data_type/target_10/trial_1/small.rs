#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut ae3 = 0;
    let q0: u8 = 0;
    let q1: u128 = 0;
    let q2 = [0; 3];
    let q3 = 0;
    let q4: i16 = 0;
    let ae2 = q2;
    let mut a = DefaultHasher::new();

    let af: [isize; 7] = [56, 56, 56, 56, 56, 56, 56];
    let i: usize = 15609822513776909592;
    let j: i32 = 652623562;
    let k: u64 = 18399139786288871729;
    let ac_result = &mut ae3 as *mut isize;

    // Function b calls
    let x: [isize; 7] = [56, 56, 56, 56, 56, 56, 56];
    let y: i32 = 0;
    let g: i32 = 0;
    let h: f64 = 0.0;
    let m: [f32; 1] = [0.0];
    let aa: [isize; 6] = [0; 6];

    // Function o calls
    let z: [isize; 2] = [0; 2];
    let r: usize = 0;
    let p: [isize; 7] = [56, 56, 56, 56, 56, 56, 56];
    let s: i32 = 0;

    loop {
        af = p;
        let ae: isize = 0;
        let t0: *const usize = ptr::null();
        let t1: (usize, u8) = (0, 0);
        let t2: (char, i32, (i64,), u64) = ('a', 0, (0,), 0);
        let t3: char = 'a';
        let t4: ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]) = ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]);
        let t5: *const u8 = ptr::null();
        let _ = (ae, t0, t1, t2, t3, t4, t5);
       
        match t4.0 .2 {
            9 => {
                break;
            }
            _ => {
                *ac_result = 88;
            }
        }
    }

    println!("{:?}", [0, 0]);
    println!("hash: {:?}", a.finish());
}