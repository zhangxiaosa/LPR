#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0, [0], 0);
    let q = (0, [0; 3]);
    b(p, p, 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    ptr::addr_of_mut!(ae.2)
}

fn h(z_decomposed: [isize; 7]) -> [isize; 2] {
    let n = ac(z_decomposed);

    let (z, n, mut af, _, ag) = (
        [13; 2],
        z_decomposed,
        z_decomposed,
        z_decomposed,
        n,
    );

    loop {
        af = n;

        let t: (
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
            (
                (0., 1_102_345_069_964_335_552, 9),
                [0.],
                (0, 0),
                0,
                (0, 0),
                [0.],
            ),
            ptr::null(),
        );

        // Inlining function calls to `b`
        unsafe {
            n.hash(&mut a);
            b(0, 0, n, 0);
        }

        match t.4 .0 .2 {
            9 => {
                unsafe {
                    af.hash(&mut a);
                    b(af, 0, -9_223_372_036_854_775_808_isize, 0);
                    b(z, [56_isize; 7], n, 0);
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
    // Inlining the function call to `h`
    let arg = [56_isize; 7];
    let n = ac(arg);
    let (z, n, mut af, _, ag) = (
        [13; 2],
        arg,
        arg,
        arg,
        n,
    );
    loop {
        af = n;
        let t: (
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
            (
                (0., 1_102_345_069_964_335_552, 9),
                [0.],
                (0, 0),
                0,
                (0, 0),
                [0.],
            ),
            ptr::null(),
        );
        unsafe {
            n.hash(&mut a);
            b(0, 0, n, 0);
        }
        match t.4 .0 .2 {
            9 => {
                unsafe {
                    af.hash(&mut a);
                    b(af, 0, -9_223_372_036_854_775_808_isize, 0);
                    b(z, [56_isize; 7], n, 0);
                }
                break;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }

    println!("{:?}", [13; 2]);

    unsafe {
        println!("hash: {}", a.finish());
    }
}