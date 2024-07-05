#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let ab = [13; 2];
    let n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);

        // Inlined b
        fn inlined_b<T: Hash>(arg: T, hasher: &mut DefaultHasher) {
            arg.hash(hasher);
        }

        inlined_b(&z, &mut ae.1);
        inlined_b(&z, &mut ae.1);
        inlined_b(&0, &mut ae.1);
        inlined_b(&0, &mut ae.1);

        unsafe {
            q.hash(&mut ae.1);
            ae.hash(&mut ae.1);
        }

        ptr::addr_of_mut!(ae.3)
    };

    o(ab, z, i, z, z, j, n);

    // Inlined b
    fn inlined_b<T1: Hash, T2: Hash, T3: Hash, T4: Hash>(arg1: T1, arg2: T2, arg3: T3, arg4: T4) {
        let mut hasher = DefaultHasher::new();
        arg1.hash(&mut hasher);
        arg2.hash(&mut hasher);
        arg3.hash(&mut hasher);
        arg4.hash(&mut hasher);
        // Discard the hasher result
        hasher.finish();
    }

    inlined_b(&j, &k, &0, &0);
    inlined_b(&[112; 6], &l, &0, &4);
    inlined_b(&(), &(), &m, &aa);

    return ab;
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
    let mut t: (
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

    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        inlined_b(&0, &0, &n, &0);

        match t.4 .0 .2 {
            9 => {
                inlined_b(&af, &ae, &0, &s);
                inlined_b(&z, &p, &n, &r);
                return;
            }
            v => unsafe {
                *_ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64
        )
    );
}