#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<f: Hash, x: Hash, y: Hash, g: Hash>(f: f, x: x, y: y, g: g) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn ac() -> *mut isize {
    let mut ae = (0, [0], 0);
    let q = (0, [0; 3]);
    b([56_isize; 7], [56_isize; 7], 0, 0);
    unsafe {
        q.hash(&mut a);
        ae.hash(&mut a);
    }
    ptr::addr_of_mut!(ae.2)
}

fn o(n: [isize; 7], mut af: [isize; 7], _: [isize; 7], ag: *mut isize) {
    // ...
    b([56_isize; 7], [56_isize; 7], n, 0);
    // ...
}

fn h() -> [isize; 2] {
    let n = ac();
    let z = [56_isize; 7];
    o([13; 2], z, z, z, n);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0], [0]);
    [13; 2]
}

fn main() {
    println!("{:?}", h());
    unsafe {
        println!("hash: {}", a.finish());
    }
}