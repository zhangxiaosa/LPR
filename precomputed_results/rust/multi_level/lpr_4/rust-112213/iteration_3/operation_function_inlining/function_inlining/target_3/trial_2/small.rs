#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn ac(p: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    
    unsafe {
        (p, p, 0, 0).hash(&mut a);
        q.hash(&mut a);
        ae.hash(&mut a);
    }

    ptr::addr_of_mut!(ae.3)
}

fn main() {
    let z_decomposed = [56_isize; 7];
    let n = unsafe { ac(z_decomposed) };
    let r = 15609822513776909592_usize;
    let af = z_decomposed;

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
        af = z_decomposed;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);
        unsafe { (0, 0, n, 0).hash(&mut a); }

        match t.4 .0 .2 {
            9 => {
                unsafe { *n = 88_isize; }
                return;
            }
            _ => unsafe {
                *n = 88_isize;
            },
        }
    }

    unsafe {
        println!("hash: {}", a.finish());
    }
}