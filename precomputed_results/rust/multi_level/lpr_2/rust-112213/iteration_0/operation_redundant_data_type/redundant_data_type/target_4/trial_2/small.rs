#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: [isize; 7] = [0; 7];

fn b(f: [isize; 7], x: [isize; 7], y: [isize; 7], g: [isize; 7]) {
    unsafe {
        f.hash(&mut a);
        x.hash(&mut a);
        y.hash(&mut a);
        g.hash(&mut a);
    }
}

fn h(z: [isize; 2], i: usize, j: i32, k: u64) -> [isize; 2] {
    let l = 1;
    let aa = [0; 6];
    let ab: [isize; 2] = Default::default();

    o(ab, z[0..2], i, z[0..2], z[0..2], j, &mut 0);

    b(j, k, [0; 7], [0, 0, 0, 0, 0, 0, 0]);
    b([112; 6], l, [0, 0, 0, 0, 0, 0, 0], aa);
    
    return ab;
}

fn o(
    z: [isize; 2],
    n: [isize; 2],
    r: usize,
    af: [isize; 2],
    p: [isize; 2],
    s: i32,
    ag: &mut usize,
) {
    loop {
        let af = n;
        
        b(0, 0, n, 0);
        
        match af[0] {
            9 => {
                b(af, 0, std::isize::MIN, s);
                b(z, p, n, r);
                return;
            }
            _ => {
                *ag = 88_usize;
            }
        }
    }
}

fn main() {
    println!("{:?}", h([56_isize; 2], 15609822513776909592_usize, 652623562_i32, 18399139786288871729_u64));
}
