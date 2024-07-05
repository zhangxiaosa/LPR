/*
  The program is inline optimized to remove the b function calls.
*/
#![feature(const_hash)]

use std::hash::{Hash, Hasher};

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));

    let mut a = DefaultHasher::new();

    unsafe {
        println!("hash: {}", a.finish());
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        z.hash(&mut DefaultHasher::new());
        z.hash(&mut DefaultHasher::new());
        0.hash(&mut DefaultHasher::new());
        0.hash(&mut DefaultHasher::new());
        ptr::addr_of_mut!(ae.3)
    };
    o(ab, z, i, z, z, j, n);
    j.hash(&mut DefaultHasher::new());
    k.hash(&mut DefaultHasher::new());
    [112; 6].hash(&mut DefaultHasher::new());
    l.hash(&mut DefaultHasher::new());
    ().hash(&mut DefaultHasher::new());
    ab
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
        af = n;
        let ah = -9223372036854775808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        0.hash(&mut DefaultHasher::new());
        0.hash(&mut DefaultHasher::new());
        n.hash(&mut DefaultHasher::new());
        0.hash(&mut DefaultHasher::new());
        u.0 = t.4 .0;
        match u.0 .2 {
            9 => {
                af.hash(&mut DefaultHasher::new());
                ae.hash(&mut DefaultHasher::new());
                ah.hash(&mut DefaultHasher::new());
                s.hash(&mut DefaultHasher::new());
                z.hash(&mut DefaultHasher::new());
                p.hash(&mut DefaultHasher::new());
                return;
            }
            v => unsafe {
                *ag = 88_isize;
            },
        }
    }
}