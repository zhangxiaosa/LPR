#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    static mut a_clone: Option<DefaultHasher> = None;
    unsafe {
        a_clone = Some(a.clone());
    }

    let ac_result;
    {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b([56_isize; 7], [56_isize; 7], 0, 0);
        unsafe {
            q.hash(&mut a_clone.as_mut().unwrap());
            ae.hash(&mut a_clone.as_mut().unwrap());
        }
        ac_result = ptr::addr_of_mut!(ae.3);
    }
    println!(
        "{:?}",
        h(
            [56_isize; 7],
            15609822513776909592_usize,
            652623562_i32,
            18399139786288871729_u64,
            ac_result
        )
    );
    unsafe {
        println!("hash: {}", a_clone.unwrap().finish());
    }
}