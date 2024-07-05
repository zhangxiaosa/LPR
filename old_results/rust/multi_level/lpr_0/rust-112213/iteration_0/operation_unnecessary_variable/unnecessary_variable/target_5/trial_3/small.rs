extern crate_hash_map as std_collections_hash_map;
#![feature(const_hash)]

use std_ptr;

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash) {
    f.hash(&mut std_collections_hash_map::DefaultHasher::new());
    x.hash(&mut
default_hasher);
    y.hash(&mut default_hasher);
    g.hash(&mut default_hasher);
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    
 
 
 let m = [0; 6];
    
 
 let
n = {
        let ad = [0; 3];
        let mut ae = (0, 0, ad, 0);
        let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
        b(z, z, 0, 0);
        q.hash(&mut default_hasher);
        ae.hash(&mut
default_hasher);
        std_ptr::addr_of_mut!(ae.3)
    };
    o(z, z, i, z, z, j, n);
    b(j, k, 0, 0);
    b([112; 6], l, 0, 4);
al((0, 0, 0.0), 0.0, (0, 0), 0, (0, 0), 0.0);
    [13, 13]
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32,
_ag: *mut isize) {
    let mut t: (*const usize, (usize, u8), (char, i32, (i64,), u64), char, ((f64, i64, i8), [f32; 1], (usize, u8), i8, (isize, i64), [f32; 1]), *const u8) = (std_ptr::null(), (0, 0), ('a', 0, (0,), 0), 'a',
(
0.0, 0, 0.0), std_ptr::null());
    let mut u: ((f64, i64, i8),) = ((0.0, 0, 0),);
    af = n;
    let ae = 0;
    t.0 = std_ptr::addr_of!(t.1.0);
    t.4.0 = (f64::NAN, 1102345069964335552_i64, 9_i8);
    b(0, 0, n, 0);
    b(af,ae,0,s);
    b(z,p,n,r);
    return;
}

fn main() {
    println!("{:?}", h([56_isize; 7], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
    println!("hash: {}", unsafe { default_hasher.finish() });
}