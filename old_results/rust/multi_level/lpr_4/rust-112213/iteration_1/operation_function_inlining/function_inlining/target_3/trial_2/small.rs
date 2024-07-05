#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let aa = [0];
    let n = ac(z);
    o([13; 2], z, 15609822513776909592, z, z, n);
    (652623562_i32, 18399139786288871729_u64, 0, 0).hash(&mut a);
    ([112; 6], 1, 0, 4).hash(&mut a);
    ((), (), [0], aa).hash(&mut a);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    (p, p, 0, 0).hash(&mut a);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
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
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);

        // Inline the first call to `b`
        unsafe {
            (0, 0, n, 0).hash(&mut a);
        }

        match t.4 .0 .2 {
            9 => {
                // Inline the second call to `b`
                unsafe {
                    (af, ae, ah, 0).hash(&mut a);
                }

                // Inline the third call to `b`
                unsafe {
                    (z, [56_isize; 7], n, r).hash(&mut a);
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
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32));
    unsafe {
        println!("hash: {}", a.finish());
    }
}