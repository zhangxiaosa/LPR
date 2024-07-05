#![feature(const_hash)]
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

fn main() {
    let z = [56_isize; 7];
    let i = 15609822513776909592_usize;
    let j = 652623562_i32;
    let k = 18399139786288871729_u64;

    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        unsafe {
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };

    loop {
        let af = z;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        let t: (
            *const usize,
            (usize, u8),
            (char, i32, (i64,), u64),
            char,
            ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]),
            *const u8,
        ) = (
            ptr::null(),
            (0, 0),
            ('a', 0, (0,), 0),
            'a',
            ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
            ptr::null(),
        );
        let mut u: ((f64, i64, i8),) = Default::default();
        af = z;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        {
            z.hash(&mut a);
            z.hash(&mut a);
            0.hash(&mut a);
            0.hash(&mut a);
        }
        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                {
                    af.hash(&mut a);
                    0.hash(&mut a);
                    ah.hash(&mut a);
                    j.hash(&mut a);
                }
                {
                    z.hash(&mut a);
                    ab.hash(&mut a);
                    z.hash(&mut a);
                    0.hash(&mut a);
                }
                break;
            }
            v => unsafe {
                *(n as *mut isize) = 88_isize;
            },
        }
    }

    println!("{:?}", ab);
    unsafe {
        println!("hash: {}", a.finish());
    }
}
