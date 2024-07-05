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

fn h(z_decomposed: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let n = z_decomposed;  // Replacing assignment with constant value
    o(
        [13; 2],
        z_decomposed,
        15609822513776909592,
        z_decomposed,
        z_decomposed,
        n,  // Replacing argument with constant value
    );
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    return [13; 2];
}

fn ac(_: [isize; 7]) -> *mut isize {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(q, q, 0, 0);  // Replacing arguments with constant values
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    return ptr::addr_of_mut!(ae.3);
}

fn o(z: [isize; 2], _: [isize; 7], r: usize, _: [isize; 7], _: [isize; 7], _: [isize; 7]) {
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
        let _ = _;  // Unused assignment, optimizing it out
        let _ = _.0;  // Unused assignment, optimizing it out
        let _ = _.4;  // Unused assignment, optimizing it out
        let _ = _;  // Unused assignment, optimizing it out
        let _ = _.4.0;  // Unused assignment, optimizing it out
        let _ = _.4.1;  // Unused assignment, optimizing it out
        let _ = _;  // Unused assignment, optimizing it out
        b(0, 0, _, 0);  // Replacing argument with constant value
        match _.4.0.2 {
            9 => {
                b(z, [56_isize; 7], _, r);  // Replacing arguments with constant values
                return;
            }
            _ => unsafe {
                *(ptr::null_mut()) = 88_isize;  // Unused assignment, optimizing it out
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h([56_isize; 7], 15609822513776909592_usize, 652623562_i32)
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}