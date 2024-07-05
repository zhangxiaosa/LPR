#![feature(const_hash)]

use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a = DefaultHasher::new();

    fn b(f: u32, x: u64, y: usize, g: u16) {
        let mut hasher = DefaultHasher::new();
        f.hash(&mut hasher);
        x.hash(&mut hasher);
        y.hash(&mut hasher);
        g.hash(&mut hasher);
    }

    fn h() -> [isize; 2] {
        let z = [1_isize; 7];
        let i = 1_usize;
        let j = 2_i32;
        let k = 3_u64;

        let l = 1_i32;
        let aa = [0_isize; 6];
        let m = [0_isize; 6];
        let ab = [13_isize, 13];
        let n = ptr::null_mut::<isize>();

        fn ac(p: [isize; 7]) -> *mut isize {
            let mut hasher = DefaultHasher::new();
            p.hash(&mut hasher);

            let ad = [0_isize; 3];
            let ae = (0_isize, 0_isize, ad, 0_isize);
            hasher.hash(&ae);

            ptr::addr_of_mut!(ae.3)
        }

        fn o(z: isize, n: [isize; 7], r: usize, af: [isize; 7], p: [isize; 7], s: i32, ag: *mut isize) {
            let t = 1;

            b(0, 0, n, 0);

            unsafe {
                *ag = 88_isize;
            }
        }

        let result = ab;
        result
    }

    println!("{:?}", h());
    println!("hash: {{}}", a.finish());
}