#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n = {
        let mut ae = (0, 0, [0], 0);
        let q = (0, 0, [0; 3], 0);
        unsafe {
            z.hash(&mut a);
            z.hash(&mut a);
            0.hash(&mut a);
            0.hash(&mut a);
            q.hash(&mut a);
            ae.hash(&mut a);
        }
        ptr::addr_of_mut!(ae.3)
    };
    o([13; 2], z, i, z, z, j, n);
    j.hash(&mut a);
    k.hash(&mut a);
    [112; 6].hash(&mut a);
    1.hash(&mut a);
    0.hash(&mut a);
    4.hash(&mut a);
    ().hash(&mut a);
    ().hash(&mut a);
    [0].hash(&mut a);
    aa.hash(&mut a);
    return [13; 2];
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut usize,
) {
    let mut t: (
        *const usize,
        (usize, i8),
        (char, i32, (isize,), u64),
        char,
        (
            (f64, isize, i8),
            [f32; 1],
            (usize, i8),
            i8,
            (isize, isize),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        (
            (0., 0, 0),
            [0.],
            (0, 0),
            0,
            (0, 0),
            [0.],
        ),
        ptr::null(),
    );
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_isize, 9_i8);
        z.hash(&mut a);
        p.hash(&mut a);
        n.hash(&mut a);
        0.hash(&mut a);
        match t.4 .0 .2 {
            9 => {
                af.hash(&mut a);
                ae.hash(&mut a);
                (-9223372036854775808_isize).hash(&mut a);
                s.hash(&mut a);
                z.hash(&mut a);
                p.hash(&mut a);
                n.hash(&mut a);
                r.hash(&mut a);
                return;
            }
            _ => unsafe {
                *ag = 88_usize;
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

    unsafe {
        println!("hash: {}", a.finish());
    }
}