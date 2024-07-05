#![feature(const_hash)]
use std::hash::{Hash, Hasher};
use std::ptr;
static mut a: u64 = 0;

fn b(f: u64, x: u64, y: u64, g: u64) {
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
    g.hash(&mut a);
}

fn h(z: [isize; 7], i: u64, j: i32, k: u64) -> [isize; 2] {
    let aa = [0];
    let n: *mut isize = ptr::null_mut();
    let mut ae = (0, 0, [0; 3], 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, [0; 3], 0, 0);
    b(z[0], z[0], 0, 0);
    a = q.0 as u64;
    ae.hash(&mut a);
    unsafe {
        ptr::addr_of_mut!(ae.3);
    }
    o([13_isize, 13_isize], z, i, z, z, j, n);
    b(j as u64, k as u64, 0, 0);
    b(112, 1, 0, 4);
    b(0, 0, 0, aa[0]);
    return [13_isize, 13_isize];
}

fn o(z: [isize; 2], n: [isize; 7], r: u64, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) {
    let mut t = (ptr::null::<usize>(), (0, 0), ('a', 0, (0,), 0), 'a', ((0.0, 0, 0), [0.0], (0, 0), 0, (0, 0), [0.0]), ptr::null::<u8>());
    loop {
        af = n;
        let ae = 0;
        t.0 = ptr::null();
        t.4 .0 = (f64::NAN, 1102345069964335552, 9_i8);
        b(0, 0, n as u64, 0);
        match t.4 .0 .2 {
            9 => return,
            v => unsafe { *_ag = 88; }
        }
    }
}

fn main() {
    println!("{:?}",
        h([
            56_isize;
            7
        ],
        15609822513776909592,
        652623562,
        18399139786288871729
    ).iter().map(|&x| x).collect::<Vec<_>>()
    );
    unsafe {
        println!("hash: {}", a);
    }
}