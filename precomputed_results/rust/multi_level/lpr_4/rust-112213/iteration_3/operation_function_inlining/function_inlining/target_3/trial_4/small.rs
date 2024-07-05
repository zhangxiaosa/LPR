#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn h(z_decomposed: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = {
        let mut ae = (0_isize, 0_isize, [0], 0_isize);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);

        {
            let mut a = unsafe { &mut a };
            p.hash(a);
            p.hash(a);
            0.hash(a);
            0.hash(a);

            q.hash(a);
            ae.hash(a);
        }
        ptr::addr_of_mut!(ae.3)
    };

    let z = [13; 2];
    let n = z_decomposed;
    let r = 15609822513776909592;
    let af = z_decomposed;
    let ag = n.as_mut_ptr();

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
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);

        {
            let mut a = unsafe { &mut a };
            0.hash(a);
            0.hash(a);
            n.hash(a);
            0.hash(a);
        }

        match t.4 .0 .2 {
            9 => {
                {
                    let mut a = unsafe { &mut a };
                    af.hash(a);
                    ae.hash(a);
                    (-9_223_372_036_854_775_808_isize).hash(a);
                    0.hash(a);
                }

                {
                    let mut a = unsafe { &mut a };
                    z.hash(a);
                    [56_isize; 7].hash(a);
                    n.hash(a);
                    r.hash(a);
                }

                return z;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32));
    unsafe {
        println!("hash: {}", a.finish());
    }
}
