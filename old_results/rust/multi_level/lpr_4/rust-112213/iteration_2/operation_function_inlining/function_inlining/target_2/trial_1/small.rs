#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();

fn main() {
    let mut ae = (0_isize, 0_isize, [0], 0_isize);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    [56_isize; 7].hash(&mut a);
    15609822513776909592_usize.hash(&mut a);
    652623562_i32.hash(&mut a);

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
        ae = [56_isize; 7];
        let ah = -9_223_372_036_854_775_808_isize;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1.0);
        t.4.0 = (f64::NAN, 1_102_345_069_964_335_552_i64, 9_i8);

        [56_isize; 7].hash(&mut a);
        0.hash(&mut a);
        [56_isize; 7].hash(&mut a);
        15609822513776909592_usize.hash(&mut a);

        [56_isize; 7].hash(&mut a);
        [56_isize; 7].hash(&mut a);
        15609822513776909592_usize.hash(&mut a);
        652623562_i32.hash(&mut a);

        return [13; 2];
    }

    unsafe {
        println!("hash: {}", a.finish());
    }
}