#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

// Constants
const CONST_HASH_FEATURE: &str = "const_hash";

// Standard library imports
fn main() {
    // Variables
    let mut a = DefaultHasher::new();

    // Function calls
    b::<[isize; 7], [isize; 7], isize, isize>(&mut a, z, z, 0, 0);
    let aa = [0];
    let ad = [0; 3];
    let mut ae = (0, 0, ad, 0);
    let q = (0, 0, ad, 0, 0);
    f.hash(&mut a);
    x.hash(&mut a);
    y.hash(&mut a);
    g.hash(&mut a);
    q.hash(&mut a);
    ae.hash(&mut a);
    o([13, 13], z, i, z, z, j, n);
    b::<i32, u64, (), [isize; 1]>(&mut a, j, k, 0, 0);
    b::<[i32; 6], i32, i32, i32>(&mut a, [112; 6], 1, 0, 4);
    b::<(), (), [isize; 1], [isize; 1]>(&mut a, (), (), [0], aa);
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    unsafe {
        println!("hash: {}", a.finish());
    }
}