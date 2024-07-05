#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: DefaultHasher = DefaultHasher::new();

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let ae = (0, 0, [0], 0);
    let q = (0, 0, [0; 3], 0);

    unsafe {
        z.hash(&mut a);
        z.hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);
        q.hash(&mut a);
        ae.hash(&mut a);
    }

    let n = ptr::addr_of_mut!(ae.3);
    o([13; 2], z, i, z, z, j, n);

    [13; 2]
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
            (isize, i64),
            [f32; 1],
        ),
        *const u8,
    ) = (
        ptr::null(),
        (0, 0),
        ('a', 0, (0,), 0),
        'a',
        ((0., 0, 0), [0.], (0, 0), (0, 0), [0.]),
        ptr::null(),
    );

    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);

        z.hash(&mut a);
        p.hash(&mut a);
        n.hash(&mut a);
        r.hash(&mut a);

        match t.4 .0 .2 {
            9 => {
                z.hash(&mut a);
                0.hash(&mut a);
                n.hash(&mut a);
                s.hash(&mut a);
                z.hash(&mut a);
                p.hash(&mut a);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!(
        "{:?}",
        h(
            [56_isize; 7],
            15_609_822_513_776_909_592_usize,
            652_623_562_i32,
            18_399_139_786_288_871_729_u64
        )
    );
    unsafe {
        println!("hash: {}", a.finish());
    }
}