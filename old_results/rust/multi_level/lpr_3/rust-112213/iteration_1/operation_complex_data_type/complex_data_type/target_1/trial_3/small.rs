#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
    // Implementation omitted
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let aa: isize = 0;

    let mut ae = (0, 0, [0], 0);
    let q = (0, 0, [0; 3], 0);

    b(&z, &z, 0, 0);
    b(&q, &ae, 0, 0);

    let n: *mut isize = &mut ae.3;

    o([13; 2], z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], aa);
    return [13; 2];
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    let mut t = (ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a', ((0., 0, 0), [0.], (0, 0), (0, 0), [0.]), ptr::null());

    loop {
        af = n;
        let ae: isize = 0;
        t.0 = ptr::addr_of!(t.1 .0);
        t.4 .0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
        b(0, 0, n, 0);

        match t.4 .0 .2 {
            9 => {
                b(af, ae, 0, s);
                b(&z, &p, n, r);
                return;
            }
            _ => unsafe {
                *ag = 88_isize;
            },
        }
    }
}

fn main() {
    println!("{:?}", h(
        [56_isize; 7],
        15_609_822_513_776_909_592_usize,
        652_623_562_i32,
        18_399_139_786_288_871_729_u64
    ));
}
