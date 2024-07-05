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

fn h(z: [isize; 7], _: usize, _: i32) -> [isize; 2] {
    let aa = [0; 6];
    o([13; 2], z, 15609822513776909592, z, z);
    b(652623562_i32, 18399139786288871729_u64, 0, 0);
    b([112; 6], 1, 0, 4);
    b((), (), [0; 6], aa);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    b(p, p, 0, 0);
    return ptr::addr_of_mut!(p.3);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], _: [isize; 7]) {
    b(0, 0, n, 0);
    b(af, 0, 0, 0);
    b(z, [56_isize; 7], n, r);
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32));
}