#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a: DefaultHasher = DefaultHasher::new();

    let mut af: [isize; 7] = [0; 7];
    let mut ad: [isize; 3] = [0; 3];
    let mut ae: (isize, isize, [isize; 3], isize) = (0, 0, ad, 0);

    let mut z: [isize; 7] = [0; 7];
    let mut i: usize = 15609822513776909592;
    let mut j: i32 = 652623562;
    let mut k: u64 = 18399139786288871729;
    let mut ac_result: *mut isize;

    for index in 0..6 {
        let loop_var: usize = 13;
        ae.2[index] = loop_var;
        af[index] = z[index];
    }

    loop {
        af = z;
        let ae_0: usize = 0;
        let t_1_0: *const usize = ptr::null();
        let t_2_0: usize = 0;
        let t_2_1: u8 = 0;
        let t_3_0: char = 'a';
        let t_3_1: i32 = 0;
        let t_3_2: (i64,) = (0,);
        let t_3_3: u64 = 0;
        let t_4_0_0: f64 = f64::NAN;
        let t_4_0_1: i64 = 1102345069964335552;
        let t_4_0_2: i8 = 9;
        let t_4_1: [f32; 1] = [0.0];
        let t_4_2_0: usize = 0;
        let t_4_2_1: u8 = 0;
        let t_4_3: i8 = 0;
        let t_4_4_0: isize = 0;
        let t_4_4_1: i64 = 0;
        let t_4_5: [f32; 1] = [0.0];
        let t_5: *const u8 = ptr::null();

        af = z;

        match t_4_0_2 {
            9 => {
                unsafe { *ac_result = -9223372036854775808; }
                break;
            }
            _ => unsafe {
                *ag = 88;
            }
        }
    }

    println!("{:?}", ab);
    unsafe { println!("hash: {}", a.finish()); }
}