use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

fn main() {
    let mut a: DefaultHasher = DefaultHasher::new();
    let z: [isize; 7] = [56; 7];
    let i: usize = 15609822513776909592;
    let j: i32 = 652623562;
    let k: u64 = 18399139786288871729;
    let l: isize = 1;
    let aa: [isize; 6] = [0; 6];
    let mut m: [isize; 6] = [0; 6];
    let ab: [isize; 2] = [13, 13];
    let mut ad: [isize; 3] = [0; 3];
    let mut ae: (isize, isize, [isize; 3], isize) = (0, 0, ad, 0);
    let q: (u8, u128, [u64; 3], isize, i16) = (0, 0, ad, 0, 0);
    b(z, z, 0, 0, &mut a);
    q.hash(&mut a);
    ae.hash(&mut a);
    let n: *mut isize = unsafe { ptr::addr_of_mut!(ae.3) };
    o(ab, z, i, z, z, j, n);
    b(j, k, 0, 0, &mut a);
    b([112; 6], l, 0, 4, &mut a);
    let m: () = ();
    let aa: () = ();
    println!("{:?}", ab);
    println!("hash: {}", a.finish());
}

fn b(f: impl Hash, x: impl Hash, y: impl Hash, g: impl Hash, a: &mut DefaultHasher) {
    f.hash(a);
    x.hash(a);
    y.hash(a);
    g.hash(a);
}

fn o(z: [isize; 2], n: [isize; 7], r: usize, mut af: [isize; 7], p: [isize; 7], s: i32, _ag: *mut isize) { /* Remaining o function body */ }
