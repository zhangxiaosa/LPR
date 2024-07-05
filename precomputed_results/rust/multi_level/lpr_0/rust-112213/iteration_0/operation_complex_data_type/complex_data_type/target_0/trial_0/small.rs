#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a_hasher: DefaultHasher = DefaultHasher::new();
let a: &'static mut DefaultHasher = unsafe { &mut *(&a_hasher as *const DefaultHasher as *mut DefaultHasher) };

fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    unsafe {
        f.hash(a);
        x.hash(a);
        y.hash(a);
        g.hash(a);
    }
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    // function body
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
    // function body
}

fn main() {
    // function body
}