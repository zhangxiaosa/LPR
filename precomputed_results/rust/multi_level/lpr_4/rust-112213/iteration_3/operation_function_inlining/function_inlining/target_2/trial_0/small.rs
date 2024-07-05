#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn main() {
    let z_decomposed = [56_isize; 7];
    let _: usize = 15609822513776909592;
    let _: i32 = 652623562_i32;

    let n = ac(z_decomposed);

    {
        let mut af = z_decomposed;
        let z = [13; 2];
        let r = 15609822513776909592;
        let mut ag = &mut 0;

        let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1])), *const u8) = (
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
                f.hash(unsafe { &mut a });
                x.hash(unsafe { &mut a });
                y.hash(unsafe { &mut a });
                g.hash(unsafe { &mut a });
            }

            match t.4 .0 .2 {
                9 => {
                    unsafe { af.hash(&mut a); }
                    unsafe { ae.hash(&mut a); }
                    break;
                }
                _ => unsafe { *ag = 88_isize; },
            }
        }
    }

    {
        f.hash(unsafe { &mut a });
        x.hash(unsafe { &mut a });
        y.hash(unsafe { &mut a });
        g.hash(unsafe { &mut a });
    }

    {
        [13; 2]
    }

    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);

    {
        q.hash(unsafe { &mut a });
        ae.hash(unsafe { &mut a });
    }

    println!("{:?}", [13; 2]);
    unsafe {
        println!("hash: {}", a.finish());
    }
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);

    {
        p.hash(unsafe { &mut a });
        p.hash(unsafe { &mut a });
        0.hash(unsafe { &mut a });
        0.hash(unsafe { &mut a });
    }

    q.hash(unsafe { &mut a });
    ae.hash(unsafe { &mut a });

    ptr::addr_of_mut!(ae.3)
}

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    {
        f.hash(unsafe { &mut a });
        x.hash(unsafe { &mut a });
        y.hash(unsafe { &mut a });
        g.hash(unsafe { &mut a });
    }
}
