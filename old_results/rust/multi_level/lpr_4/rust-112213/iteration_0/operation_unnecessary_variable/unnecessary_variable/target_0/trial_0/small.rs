![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};

fn b<f: Hash, w: Hash, d: Hash, e: Hash>(f: f, x: w, y: d, g: e) {
    
}

fn h(z: [isize; 7], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let m = [0; 6];
    let n = ac(z);
    o([13; 2], z, i, z, z, j, n);
    [112; 6].hash(&mut a);
    l.hash(&mut a);
    0.hash(&mut a);
    4.hash(&mut a);
    ().hash(&mut a);
    ().hash(&mut a);
    m.hash(&mut a);
    aa.hash(&mut a);
    return [13; 2];
}

fn ac(p: [isize; 7]) -> *mut isize {
    let ad = [0; 3];
    0.hash(&mut a);
    return ptr::addr_of_mut!(ad.2);
}

fn o(
    z: [isize; 2],
    n: [isize; 7],
    r: usize,
    mut af: [isize; 7],
    p: [isize; 7],
    s: i32,
    ag: *mut isize,
) {
    0.hash(&mut a);
    0.hash(&mut a);
    n.hash(&mut a);
    0.hash(&mut a);
    af.hash(&mut a);
    0.hash(&mut a);
    s.hash(&mut a);
    z.hash(&mut a);
    p.hash(&mut a);
    n.hash(&mut a);
    r.hash(&mut a);
}

fn main() {
    println!("{:?}", h(
        [56_isize; 7],
        15609822513776909592_usize,
        652623562_i32,
        18399139786288871729_u64
    ));
    println!("hash: 0");
}