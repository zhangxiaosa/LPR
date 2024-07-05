#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    b(&mut a, &[56; 7], &[56; 7], 0, 0);
    b(&mut a, &15609822513776909592_usize, &652623562_i32, 18399139786288871729_u64, 0);

    unsafe {
        println!("hash: {}", a.finish());
    }
}

fn b(a: &mut DefaultHasher, f: &[isize], x: &[isize], y: isize, g: isize) {
    f.hash(a);
    x.hash(a);
    y.hash(a);
    g.hash(a);
}