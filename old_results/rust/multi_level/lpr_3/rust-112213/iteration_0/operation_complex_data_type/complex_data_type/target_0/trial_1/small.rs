use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: u64 = 0;

fn b<c: Hash, w: Hash, d: Hash, e: Hash>(f: c, x: w, y: d, g: e) {
    // ... (rest of the code)
}

fn main() {
    let mut a = DefaultHasher::new();
    // ... (rest of the code)
    unsafe {
        a.finish();
    }
}