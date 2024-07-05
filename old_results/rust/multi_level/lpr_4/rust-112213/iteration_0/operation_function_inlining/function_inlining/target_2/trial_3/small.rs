#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let ab = [13; 2];

    // Implementation of function `b`
    unsafe {
        j.hash(&mut a);
        k.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);
    }

    // Implementation of function `ac`
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    unsafe {
        z.hash(&mut a);
        z.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    let ag = ptr::addr_of_mut!(ae.3);
    // End of `ac` implementation

    // Implementation of function `o`
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
    let mut af = z;
    loop {
        af = z;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        // `b` calls using `af` and `ae`
        unsafe {
            af.hash(&mut a);
            ae.hash(&mut a);
            ah.hash(&mut a);
            j.hash(&mut a);
            z.hash(&mut a);
            p.hash(&mut a);
            n.hash(&mut a);
            r.hash(&mut a);
        }
        u.0 = t.4.0;
        match u.0.2 {
            9 => {
                // `b` calls using `af`, `ae`, `ah`, and `s`
                unsafe {
                    af.hash(&mut a);
                    ae.hash(&mut a);
                    ah.hash(&mut a);
                    s.hash(&mut a)
                };
                // `b` calls using `z`, `p`, `n`, and `r`
                unsafe {
                    z.hash(&mut a);
                    p.hash(&mut a);
                    n.hash(&mut a);
                    r.hash(&mut a);
                }
                return ab;
            }
            _ => {
                unsafe {
                    *ag = 88_isize;
                }
            }
        }
    }
    // End of `o` implementation

    return ab;
}

fn main() {
    let result = h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64,
    );
    println!("{:?}", result);

    unsafe {
        println!("hash: {}", a.finish());
    }
}
