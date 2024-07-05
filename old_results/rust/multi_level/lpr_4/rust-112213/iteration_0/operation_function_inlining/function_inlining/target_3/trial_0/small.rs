#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut A: DefaultHasher = DefaultHasher::new();

fn main() {
    let z = [56_isize; 7];
    let i = 15609822513776909592_usize;
    let j = 652623562_i32;
    let k = 18399139786288871729_u64;

    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let mut af = z;
    let p = z;
    let mut s = j;

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
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af = z;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        unsafe {
            z.hash(&mut { A });
            af.hash(&mut { A });
            i.hash(&mut { A });
            z.hash(&mut { A });
            z.hash(&mut { A });
            j.hash(&mut { A });
            ac(z).hash(&mut { A });
            j.hash(&mut { A });
            k.hash(&mut { A });
            0.hash(&mut { A });
            0.hash(&mut { A });
            [112_u8; 6].hash(&mut { A });
            l.hash(&mut { A });
            0.hash(&mut { A });
            4.hash(&mut { A });
            ().hash(&mut { A });
            ().hash(&mut { A });
            m.hash(&mut { A });
            aa.hash(&mut { A });
        }

        u.0 = t.4 .0;

        match u.0 .2 {
            9 => {
                unsafe {
                    ab.hash(&mut { A });
                    af.hash(&mut { A });
                    ae.hash(&mut { A });
                    s.hash(&mut { A });
                    z.hash(&mut { A });
                    p.hash(&mut { A });
                    n.hash(&mut { A });
                    i.hash(&mut { A });
                    z.hash(&mut { A });
                    z.hash(&mut { A });
                    j.hash(&mut { A });
                    n.hash(&mut { A });
                    z.hash(&mut { A });
                    p.hash(&mut { A });
                    r.hash(&mut { A });

                    println!("{:?}", ab);

                    println!("hash: {}", A.finish());
                }
                return;
            }
            v => unsafe {
                88.hash(&mut { A });
            },
        }
    }
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    unsafe {
        p.hash(&mut { A });
        p.hash(&mut { A });
        0.hash(&mut { A });
        0.hash(&mut { A });
        q.hash(&mut { A });
        ae.hash(&mut { A });
    }
    return ptr::addr_of_mut!(ae.3);
}