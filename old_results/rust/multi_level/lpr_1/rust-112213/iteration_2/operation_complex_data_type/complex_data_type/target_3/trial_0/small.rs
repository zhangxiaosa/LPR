#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let ac_result;
    {
        let ad_0: isize = 0;
        let ad_1: isize = 0;
        let ad_2: isize = 0;
        let mut ae: (isize, isize, [isize; 3], isize) = (0, 0, [ad_0, ad_1, ad_2], 0);
        let q_0: u8 = 0;
        let q_1: u128 = 0;
        let q_2: [u64; 3] = [ad_0 as u64, ad_1 as u64, ad_2 as u64];
        let q_3: isize = 0;
        let q_4: i16 = 0;
        let mut a: DefaultHasher = DefaultHasher::new();

        [56_isize; 7].hash(&mut a);
        [56_isize; 7].hash(&mut a);
        0.hash(&mut a);
        0.hash(&mut a);

        unsafe {
            q_0.hash(&mut a);
            ae.hash(&mut a);
        }

        ac_result = &mut ae.3;
    }

    let mut ab: [isize; 2] = [13, 13];
    let z_0: isize = 0;
    let z_1: isize = 0;
    let z: [isize; 7] = [z_0, z_0, z_0, z_0, z_0, z_0, z_0];
    let i: usize = 15609822513776909592;
    let j: i32 = 652623562;
    let k: u64 = 18399139786288871729;

    let n = ac_result;
    o([z_0, z_1], z, i, z, z, j, n);
    0.hash(&mut a);
    0.hash(&mut a);
    [112, 112, 112, 112, 112, 112].hash(&mut a);
    1.hash(&mut a);
    0.hash(&mut a);
    4.hash(&mut a);
    ((), ()).hash(&mut a);
    ([0.0], [0.0]).hash(&mut a);
    ([0, 0], 0, [0.0]).hash(&mut a);

    unsafe {
        println!("hash: {}", a.finish());
    }
}