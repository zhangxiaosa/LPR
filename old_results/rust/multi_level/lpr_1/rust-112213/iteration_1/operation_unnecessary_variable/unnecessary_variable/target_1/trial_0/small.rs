#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<F: Hash, X: Hash, Y: Hash, G: Hash>(f: F, x: X, y: Y, g: G) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64, ac_result: *mut isize) -> [isize; 2] {
    let ab = [13; 2];
    o(ab, z, i, z, z, j);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    
    let aa = [0; 6];
    let m = [0; 6];
    b((), (), m, aa);

    ab
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    _: [isize; 7],
    _: [isize; 7],
    s: i32,
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

    // remaining code...

}

fn main() {
    let ac_result;
    {
        let ad = [0; 3];
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b([56_isize; 7], [56_isize; 7], 0, 0);
        unsafe {
            q.hash(&mut a);
        }
        ac_result = ptr::addr_of_mut!(ad.3);
    }
    println!("{:?}", h([56_isize; 7], 15609822513776909592, 652623562, 18399139786288871729, ac_result));
    unsafe {
        println!("hash: {}", a.finish());
    }
}