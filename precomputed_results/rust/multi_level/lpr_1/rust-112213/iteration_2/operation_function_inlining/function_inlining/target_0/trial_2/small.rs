#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac_result;

    unsafe {
        z.hash(&mut a);
        i.hash(&mut a);
        j.hash(&mut a);
        k.hash(&mut a);

        z.hash(&mut a);
        z.hash(&mut a);
        i.hash(&mut a);
        z.hash(&mut a);
        z.hash(&mut a);
        j.hash(&mut a);
        n.hash(&mut a);

        j.hash(&mut a);
        k.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);

        [112; 6].hash(&mut a);
        1.hash(&mut a);
        0.hash(&mut a);
        4.hash(&mut a);

        ().hash(&mut a);
        ().hash(&mut a);
        m.hash(&mut a);
        aa.hash(&mut a);
    }

    ab
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
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
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        unsafe {
            0.hash(&mut a);
            0.hash(&mut a);
            n.hash(&mut a);
            0.hash(&mut a);
        }

        match t.4 .0 .2 {
            9 => {
                unsafe {
                    af.hash(&mut a);
                    ae.hash(&mut a);
                    -9223372036854775808_isize.hash(&mut a);
                    s.hash(&mut a);
                    z.hash(&mut a);
                    p.hash(&mut a);
                    n.hash(&mut a);
                    r.hash(&mut a);
                }
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    let ac_result;
    {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);

        unsafe {
            [56_isize; 7].hash(&mut a);
            [56_isize; 7].hash(&mut a);
            0.hash(&mut a);
            0.hash(&mut a);

            q.hash(&mut a);
            ae.hash(&mut a);
        }

        ac_result = ptr::addr_of_mut!(ae.3);
    }

    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64, ac_result));

    unsafe {
        println!("hash: {}", a.finish());
    }
}