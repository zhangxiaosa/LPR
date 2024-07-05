#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = ac(z);
    o(ab, z, i, z, z, j, n);

    unsafe {
        z.hash(&mut a);
        i.hash(&mut a);
        j.hash(&mut a);
        k.hash(&mut a);
    }

    [ab[0], ab[1]]
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    
    unsafe {
        p.hash(&mut a);
        ae.hash(&mut a);
    }

    ptr::addr_of_mut!(ae.3)
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut isize,
) {
    let mut t = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), 0, (0, 0), [0.]),
        ptr::null(),
    );
    let mut u: ((f64, i64, i8),) = Default::default();

    loop {
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        unsafe {
            n.hash(&mut a);
            af.hash(&mut a);
        }

        u.0 = t.4 .0;

        match u.0 .2 {
            9 => {
                unsafe {
                    af.hash(&mut a);
                    ae.hash(&mut a);
                    ah.hash(&mut a);
                    s.hash(&mut a);
                    z.hash(&mut a);
                    p.hash(&mut a);
                    n.hash(&mut a);
                    r.hash(&mut a);
                }
                return;
            }
            v => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64
    ));

    unsafe {
        println!("hash: {}", a.finish());
    }
}